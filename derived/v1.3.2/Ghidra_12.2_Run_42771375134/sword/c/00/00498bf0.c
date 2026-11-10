/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00498bf0; name: FUN_00498bf0
 */


undefined8
FUN_00498bf0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_3 + 0x38);
  if (uVar1 == 0) {
    return 2;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)param_4 / uVar1;
  }
  plVar4 = *(long **)(*(long *)(param_3 + 0x30) + (ulong)((uint)param_4 - uVar2 * uVar1) * 8);
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 2;
    }
    if (plVar4[1] == param_4) break;
    plVar4 = (long *)*plVar4;
  }
  uVar5 = plVar4[2];
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)param_5 / uVar1;
  }
  plVar4 = *(long **)(*(long *)(param_3 + 0x30) + (ulong)((uint)param_5 - uVar2 * uVar1) * 8);
  do {
    if (plVar4 == (long *)0x0) {
      lVar3 = FUN_004e9f10(uVar5);
joined_r0x00498ca0:
      if (lVar3 == 0) {
        return 2;
      }
      uVar5 = FUN_00496c10(param_1,param_2,lVar3,param_5);
      return uVar5;
    }
    if (plVar4[1] == param_5) {
      FUN_0045b180(plVar4[2]);
      lVar3 = FUN_004e9f10(uVar5);
      goto joined_r0x00498ca0;
    }
    plVar4 = (long *)*plVar4;
  } while( true );
}


