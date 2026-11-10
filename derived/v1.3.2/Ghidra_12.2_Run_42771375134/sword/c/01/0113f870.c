/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113f870; name: FUN_0113f870
 */


void FUN_0113f870(long param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  long local_58;
  long local_50;
  long local_48;
  long local_38;
  
  *(undefined8 *)(param_1 + 0x5d0) = param_3;
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 0x2c);
  *(char *)(param_1 + 0x6b4) = *param_2;
  lVar1 = param_1 + 0x100;
  puVar2 = &DAT_02165748;
  if (*param_2 != '\0') {
    puVar2 = &DAT_02165740;
  }
  FUN_00ffd010(lVar1,puVar2);
  puVar2 = &DAT_02165758;
  if (param_2[1] != '\0') {
    puVar2 = &DAT_02165750;
  }
  FUN_00ffd010(lVar1,puVar2);
  if (*(long *)(param_1 + 0x4c8) != 0) {
    FUN_0168c670(*(long *)(param_1 + 0x4c8),param_2 + 4);
    lVar7 = *(long *)(param_1 + 0x538);
    if (lVar7 != 0) {
      plVar6 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar4 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165760);
      FUN_016a7910(lVar7,param_2[0x20],1,uVar4,0,0);
      lVar5 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165768);
      if (param_2[0x20] == param_2[0x21]) {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
      }
      else {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
        FUN_016a7910(lVar7,param_2[0x21],1,lVar5,0,0);
      }
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165770);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165778);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | param_2[0x28] != '\0';
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165780);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | 1U < (byte)param_2[0x28];
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165788);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | 2U < (byte)param_2[0x28];
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165790);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | 3U < (byte)param_2[0x28];
      uVar8 = NEON_ucvtf((uint)(byte)param_2[0x22]);
      FUN_00ffd510(uVar8,lVar1,&DAT_02165798);
      iVar3 = *(int *)(param_2 + 0x24);
      local_38 = *(long *)(param_1 + 0x6c0);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
      }
      FUN_008c4e70(lVar1,&DAT_021657a0,&local_38,&DAT_021657a8,10);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      local_48 = *(long *)(param_1 + 0x6c0);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
      }
      puVar2 = &DAT_021657b8;
      if (*(int *)(param_2 + 0x24) != 2) {
        puVar2 = &DAT_021657c0;
      }
      FUN_008c4e70(lVar1,&DAT_021657b0,&local_48,puVar2,10);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021657c8);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | iVar3 != 0;
      local_50 = *(long *)(param_1 + 0x6c0);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
      }
      FUN_008c4e70(lVar1,&DAT_021657d0,&local_50,&DAT_021657d8,10);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
      local_58 = *(long *)(param_1 + 0x6c0);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      FUN_008c4e70(lVar1,&DAT_021657e0,&local_58,&DAT_021657e8,10);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      uVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021657f0);
      FUN_00ffd840(lVar1,uVar4);
      FUN_0113fc80(param_1);
      FUN_01140d10(param_1,1);
      *(undefined2 *)(param_1 + 0x6b5) = 0;
      if (*(long *)(param_1 + 0x4c0) != 0) {
        FUN_016d2080();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


