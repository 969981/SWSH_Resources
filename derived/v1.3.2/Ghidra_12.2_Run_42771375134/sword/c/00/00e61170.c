/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e61170; name: FUN_00e61170
 */


void FUN_00e61170(ulong *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  
  uVar2 = DAT_02a5ba90;
  if (*(int *)(param_2 + 0x8a4) == 1) {
    *param_1 = DAT_02a5ba88;
    param_1[1] = uVar2;
    uVar2 = DAT_02a5baa0;
    param_1[2] = DAT_02a5ba98;
    param_1[3] = uVar2;
    if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e611a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(uVar2 + 0x48) + 0x10))();
      return;
    }
  }
  else {
    bVar1 = *(byte *)(param_2 + 0xb90);
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_2 + 0x900);
      uVar3 = 0xcbf29ce484222645;
      uVar2 = param_2 + 0x900;
      if (bVar1 != 0) {
        pbVar4 = (byte *)(param_2 + 0x901);
        do {
          uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
      }
      *param_1 = uVar3;
    }
    else {
      uVar2 = param_2 + 0xb90;
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = (byte *)(param_2 + 0xb91);
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      *param_1 = uVar3;
    }
    param_1[1] = uVar2;
    param_1[2] = 0x3f;
    param_1[3] = 0;
  }
  return;
}


