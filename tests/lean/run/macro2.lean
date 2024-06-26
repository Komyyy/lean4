notation:50 a "**" b:50 => b * a * b
notation "~" a => a+a

namespace Foo
notation "~~" a => a+a
end Foo

syntax:60 term "+++" term:59 : term

syntax "<||" term "||>" : term

macro_rules
| `($a +++ $b) => `($a + $b + $b)

macro_rules
| `(<|| $x ||>) => `($x +++ 1 ** 2)


/-- info: 2 * (2 + 1 + 1) * 2 : Nat -/
#guard_msgs in
#check <|| 2 ||>

/-- info: 2 * (2 + 2 + 1 + 1) * 2 : Nat -/
#guard_msgs in
#check <|| ~2 ||>

/-- info: 2 * (2 + 2 + 1 + 1) * 2 : Nat -/
#guard_msgs in
#check <|| ~~2 ||>

/-- info: 2 * (2 * (3 + 1 + 1) * 2 + 1 + 1) * 2 : Nat -/
#guard_msgs in
#check <|| <|| 3 ||> ||>
