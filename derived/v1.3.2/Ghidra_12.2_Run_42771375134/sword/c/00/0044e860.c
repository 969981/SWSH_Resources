/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044e860; name: FUN_0044e860
 */


void FUN_0044e860(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_28;
  
  lVar5 = param_1[0x20];
  if (lVar5 != 0) {
    if ((*(byte *)(lVar5 + 0x28) >> 1 & 1) != 0) {
      puVar4 = (undefined4 *)FUN_00488860(param_1[0x29]);
      plVar7 = *(long **)(puVar4 + 2);
      if (plVar7 != (long *)0x0) {
        if (*(ushort *)(plVar7 + 2) - 1 == 0) {
          if (*plVar7 != 0) {
            *(undefined4 *)(plVar7 + 1) = 0;
            FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
            *plVar7 = 0;
            *(undefined4 *)((long)plVar7 + 0xc) = 0;
          }
          FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar7);
        }
        else {
          *(short *)(plVar7 + 2) = (short)(*(ushort *)(plVar7 + 2) - 1);
        }
      }
      *(undefined8 *)(puVar4 + 2) = 0;
      *puVar4 = 0;
      lVar5 = param_1[0x20];
    }
    FUN_0048ac10(*(undefined8 *)PTR_DAT_02712dc8,lVar5,param_1);
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
  }
  local_28 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_004a4660(param_1,&local_28,uVar3 & 1);
  puVar6 = (undefined8 *)param_1[2];
  iVar1 = *(int *)(puVar6 + 10);
  *(int *)(puVar6 + 10) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    uVar2 = *(undefined4 *)PTR_DAT_02712a90;
    (**(code **)*puVar6)(puVar6);
    FUN_00404870(uVar2,puVar6);
  }
  FUN_0044e9b0(param_1);
  (**(code **)(*(long *)param_1[0x29] + 0x18))();
  return;
}


