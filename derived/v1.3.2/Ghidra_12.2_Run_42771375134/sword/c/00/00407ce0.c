/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00407ce0; name: FUN_00407ce0
 */


undefined8 FUN_00407ce0(long *param_1,uint *param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined2 *puVar7;
  ulong uVar8;
  undefined4 local_3c;
  uint *local_38;
  
  local_3c = param_3;
  local_38 = param_2;
  iVar3 = (**(code **)(*param_1 + 0x88))();
  if (iVar3 == 8) {
    uVar5 = FUN_00415340(param_1,&local_38,&local_3c,0);
    puVar2 = PTR_DAT_02712a90;
    if ((int)uVar5 == 1) {
      uVar8 = (ulong)*local_38;
      if (*local_38 != 0) {
        local_38 = local_38 + 1;
        lVar6 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar8 << 5);
        if (lVar6 == 0) {
          return 2;
        }
        puVar7 = (undefined2 *)(lVar6 + 0x10);
        do {
          *(uint *)(puVar7 + -8) = *local_38;
          *(uint *)(puVar7 + -6) = local_38[1];
          *(uint *)(puVar7 + -4) = local_38[2];
          *(uint *)(puVar7 + -2) = local_38[3];
          *puVar7 = (short)local_38[4];
          puVar7[1] = *(undefined2 *)((long)local_38 + 0x12);
          puVar7[2] = (short)local_38[5];
          *(undefined4 *)(puVar7 + 4) = *(undefined4 *)((long)local_38 + 0x16);
          puVar7[6] = *(undefined2 *)((long)local_38 + 0x1a);
          *(bool *)(puVar7 + 7) = (char)local_38[7] != '\0';
          pcVar1 = (char *)((long)local_38 + 0x1d);
          local_38 = (uint *)((long)local_38 + 0x1e);
          uVar8 = uVar8 - 1;
          *(bool *)((long)puVar7 + 0xf) = *pcVar1 != '\0';
          puVar7 = puVar7 + 0x10;
        } while (uVar8 != 0);
        FUN_00407e70(param_1,lVar6);
        FUN_00404870(*(undefined4 *)puVar2,lVar6);
      }
      uVar5 = 1;
    }
  }
  else {
    uVar5 = *(undefined8 *)PTR_DAT_02712ae0;
    lVar6 = param_1[2];
    uVar4 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_00449c90(uVar5,(int)lVar6,8,uVar4);
    uVar5 = 0x5a;
  }
  return uVar5;
}


