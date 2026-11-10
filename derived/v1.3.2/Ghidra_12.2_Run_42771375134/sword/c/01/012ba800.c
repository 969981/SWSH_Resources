/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ba800; name: FUN_012ba800
 */


void FUN_012ba800(long param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  iVar3 = FUN_008783b0(*(undefined8 *)(param_1 + 0x58));
  iVar4 = FUN_008783b0(*param_2);
  if (iVar3 == iVar4) {
    sVar1 = FUN_008783c0(*(undefined8 *)(param_1 + 0x58));
    sVar2 = FUN_008783c0(*param_2);
    if (sVar1 == sVar2) {
      iVar3 = FUN_0087ec90(*(undefined8 *)(param_1 + 0x58));
      iVar4 = FUN_0087ec90(*param_2);
      if (iVar3 == iVar4) {
        lVar6 = *param_2;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar5 = *(long *)(param_1 + 0x58);
        *(long *)(param_1 + 0x58) = lVar6;
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x012ba8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          return;
        }
      }
    }
  }
  return;
}


