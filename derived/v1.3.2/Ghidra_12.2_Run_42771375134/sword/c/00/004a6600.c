/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a6600; name: FUN_004a6600
 */


void FUN_004a6600(long *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  ulong uVar3;
  
  pbVar2 = (byte *)param_1[3];
  *param_1 = (long)(PTR_DAT_02713050 + 0x10);
  puVar1 = PTR_DAT_02712b18;
  if (pbVar2 != (byte *)0x0) {
    uVar3 = (ulong)*pbVar2;
    if (uVar3 != 0) {
      pbVar2 = pbVar2 + ((ulong)(*pbVar2 + 4) & 0x1fc) + 8;
      do {
        if (*(long *)pbVar2 != 0) {
          FUN_004be250(*(undefined8 *)puVar1,*(long *)pbVar2,param_1);
        }
        pbVar2 = pbVar2 + 0x10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      if (param_1[3] == 0) goto LAB_004a6684;
    }
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
LAB_004a6684:
  param_1[3] = 0;
  return;
}


