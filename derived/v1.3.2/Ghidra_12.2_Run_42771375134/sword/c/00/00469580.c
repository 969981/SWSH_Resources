/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00469580; name: FUN_00469580
 */


undefined1  [16]
FUN_00469580(float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
            float param_5)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2._8_8_;
  uVar2 = param_2._0_8_;
  if (param_1 < param_5) {
    if (param_3 <= param_5) {
      return param_4;
    }
    uVar2 = (ulong)(uint)(param_2._0_4_ +
                         (param_4._0_4_ - param_2._0_4_) *
                         ((param_5 - param_1) / (param_3 - param_1)));
    uVar3 = 0;
  }
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}


