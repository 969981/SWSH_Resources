/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e63c0; name: FUN_004e63c0
 */


void FUN_004e63c0(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar3 = PTR_DAT_02712a90;
  if (*(int *)(param_2 + 0x78) != 0) {
    puVar7 = *(undefined8 **)(param_2 + 0x70);
    do {
      puVar6 = (undefined8 *)*puVar7;
      iVar1 = *(int *)(puVar6 + 10);
      *(int *)(puVar6 + 10) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        uVar2 = *(undefined4 *)puVar3;
        (**(code **)*puVar6)(puVar6);
        FUN_00404870(uVar2,puVar6);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (undefined8 *)
                       (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x78) * 8));
  }
  *(undefined4 *)(param_2 + 0x78) = 0;
  lVar4 = FUN_004e6870(param_1,param_2,param_2 + 0x80);
  if ((lVar4 != 0) && ((*(char *)(param_2 + 0x68) != '\0' || (*(char *)(param_1 + 0xd8) != '\0'))))
  {
    uVar5 = *(uint *)(param_1 + 8);
    if (7 < uVar5) {
      uVar5 = 8;
    }
    FUN_004e8bf0(lVar4,param_2,uVar5);
  }
  FUN_004edfe0(param_1 + 0x18,param_2,*(undefined4 *)(param_1 + 0xc));
  return;
}


