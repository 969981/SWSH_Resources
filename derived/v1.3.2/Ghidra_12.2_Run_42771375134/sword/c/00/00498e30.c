/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00498e30; name: FUN_00498e30
 */


undefined8
FUN_00498e30(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_3 / uVar1;
    }
    for (plVar5 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_3 - uVar2 * uVar1) * 8)
        ; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5[1] == param_3) {
        FUN_0045b180(plVar5[2]);
        lVar3 = FUN_004e9f10(param_2);
        goto joined_r0x00498eb8;
      }
    }
  }
  lVar3 = FUN_004e9f10(param_2);
joined_r0x00498eb8:
  if (lVar3 == 0) {
    return 2;
  }
  uVar4 = FUN_00496e00(lVar3,param_3,param_4,param_5);
  return uVar4;
}


