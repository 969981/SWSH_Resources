/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004460b0; name: FUN_004460b0
 */


int FUN_004460b0(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ushort local_5c [2];
  undefined1 local_58 [4];
  char local_54 [4];
  
  puVar4 = PTR_DAT_02712d40;
  puVar3 = PTR_DAT_02712a90;
  iVar5 = 2;
  if ((param_2 != 0) && (*(long *)PTR_DAT_02712b68 != 0)) {
    lVar7 = 0;
    param_1 = param_1 + 8;
    do {
      iVar5 = FUN_0044e640(param_1,local_54,1);
      if (iVar5 != 1) {
        return iVar5;
      }
      lVar2 = lVar7 * 3;
      *(bool *)(*(long *)puVar4 + lVar2) = local_54[0] != '\0';
      iVar5 = FUN_0044e640(param_1,local_58,1);
      if (iVar5 != 1) {
        return iVar5;
      }
      iVar5 = FUN_0044e640(param_1,local_5c,2);
      if (iVar5 != 1) {
        return iVar5;
      }
      lVar6 = FUN_00404690(*(undefined4 *)puVar3,(ulong)local_5c[0] * 0xc);
      if (lVar6 == 0) {
        return 0x34;
      }
      iVar5 = FUN_0044e640(param_1,lVar6,(uint)local_5c[0] * 0xc);
      if (iVar5 != 1) {
LAB_00446394:
        FUN_00404870(*(undefined4 *)puVar3,lVar6);
        return iVar5;
      }
      FUN_0045f460(*(undefined8 *)puVar4,lVar7,0,local_5c[0],lVar6,local_58[0]);
      FUN_00404870(*(undefined4 *)puVar3,lVar6);
      iVar5 = FUN_0044e640(param_1,local_54,1);
      if (iVar5 != 1) {
        return iVar5;
      }
      *(bool *)(*(long *)puVar4 + lVar2 + 1) = local_54[0] != '\0';
      iVar5 = FUN_0044e640(param_1,local_58,1);
      if (iVar5 != 1) {
        return iVar5;
      }
      iVar5 = FUN_0044e640(param_1,local_5c,2);
      if (iVar5 != 1) {
        return iVar5;
      }
      lVar6 = FUN_00404690(*(undefined4 *)puVar3,(ulong)local_5c[0] * 0xc);
      if (lVar6 == 0) {
        return 0x34;
      }
      iVar5 = FUN_0044e640(param_1,lVar6,(uint)local_5c[0] * 0xc);
      if (iVar5 != 1) goto LAB_00446394;
      FUN_0045f460(*(undefined8 *)puVar4,lVar7,1,local_5c[0],lVar6,local_58[0]);
      FUN_00404870(*(undefined4 *)puVar3,lVar6);
      iVar5 = FUN_0044e640(param_1,local_54,1);
      if (iVar5 != 1) {
        return iVar5;
      }
      *(bool *)(*(long *)puVar4 + lVar2 + 2) = local_54[0] != '\0';
      iVar5 = FUN_0044e640(param_1,local_58,1);
      if (iVar5 != 1) {
        return iVar5;
      }
      iVar5 = FUN_0044e640(param_1,local_5c,2);
      if (iVar5 != 1) {
        return iVar5;
      }
      lVar6 = FUN_00404690(*(undefined4 *)puVar3,(ulong)local_5c[0] * 0xc);
      if (lVar6 == 0) {
        return 0x34;
      }
      iVar5 = FUN_0044e640(param_1,lVar6,(uint)local_5c[0] * 0xc);
      if (iVar5 != 1) goto LAB_00446394;
      FUN_0045f460(*(undefined8 *)puVar4,lVar7,2,local_5c[0],lVar6,local_58[0]);
      FUN_00404870(*(undefined4 *)puVar3,lVar6);
      uVar1 = lVar7 + 1;
      lVar7 = 1;
    } while (uVar1 < 2);
    iVar5 = 1;
  }
  return iVar5;
}


