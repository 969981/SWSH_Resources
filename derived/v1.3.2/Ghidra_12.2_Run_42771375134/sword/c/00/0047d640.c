/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047d640; name: FUN_0047d640
 */


undefined8 FUN_0047d640(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  lVar1 = FUN_004329e0(*param_1,param_1[1]);
  plVar4 = *(long **)(PTR_DAT_02713240 + 0x10);
  if (lVar1 == 0) {
    for (; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
      uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
  }
  else {
    for (; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
      if (plVar4[2] == lVar1) {
        return 1;
      }
    }
  }
  uVar3 = FUN_0047c720(lVar1,param_1,param_3,param_2,0,0,0);
  return uVar3;
}


