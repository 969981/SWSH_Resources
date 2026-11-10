/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01420720; name: FUN_01420720
 */


void FUN_01420720(long param_1,undefined8 *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  long local_88;
  undefined8 *puStack_80;
  ulong local_78;
  
  if (*(char *)(param_1 + 0x6b8) != '\0') {
    local_88 = 0x8e89686f5660e8f;
    if ((*(long *)(param_1 + 0x2b0) == 0) ||
       (uVar4 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_88), (uVar4 & 1) != 0)) {
      puVar3 = PTR_PTR_02729a18;
      uVar4 = 0;
      lVar10 = param_1 + 0x100;
      local_88 = param_1;
      puStack_80 = param_2;
      do {
        while( true ) {
          plVar1 = param_2 + uVar4 * 3;
          lVar5 = param_1 + uVar4 * 0x18;
          lVar7 = *plVar1;
          if (lVar7 == *(long *)(lVar5 + 0x658)) break;
          if (lVar7 != 0) {
            if (param_2[uVar4 * 3 + 2] != 0) {
              FUN_01420ac0(&local_88,uVar4 & 0xffffffff);
              lVar7 = *plVar1;
              break;
            }
            goto switchD_0142082c_caseD_3;
          }
          pbVar9 = *(byte **)(PTR_PTR_02729a00 + uVar4 * 8);
          bVar2 = *pbVar9;
          local_78 = 0xcbf29ce484222645;
          if (bVar2 != 0) {
            local_78 = 0xcbf29ce484222645;
            do {
              pbVar9 = pbVar9 + 1;
              local_78 = (local_78 ^ bVar2) * 0x100000001b3;
              bVar2 = *pbVar9;
            } while (bVar2 != 0);
          }
          lVar5 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_78);
          *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
          FUN_00ffd6a0(lVar10,*(undefined8 *)(PTR_PTR_02729a10 + uVar4 * 8),&DAT_02158da8,10);
          FUN_00ffcf80(lVar10,*(undefined8 *)(puVar3 + uVar4 * 0x10 + 8));
          uVar8 = *(undefined8 *)(PTR_PTR_02729a08 + uVar4 * 0x10);
LAB_01420980:
          FUN_00ffcf80(lVar10,uVar8);
joined_r0x01420860:
          uVar4 = uVar4 + 1;
          if (uVar4 == 4) goto LAB_01420994;
        }
        if (((lVar7 == 0) || (param_2[uVar4 * 3 + 2] == 0)) ||
           (*(long *)(param_1 + uVar4 * 0x18 + 0x668) != 0)) {
          iVar6 = (int)plVar1[1];
          if (iVar6 == *(int *)(lVar5 + 0x660)) goto switchD_0142082c_caseD_3;
LAB_01420818:
          switch(iVar6) {
          case 1:
          case 6:
            FUN_00ffcf80(lVar10,*(undefined8 *)(puVar3 + uVar4 * 0x10));
            FUN_00ffd450(0x3f800000,lVar10,*(undefined8 *)(PTR_PTR_02729a20 + uVar4 * 8));
            goto joined_r0x01420860;
          case 2:
            FUN_00ffcf80(lVar10,*(undefined8 *)(puVar3 + uVar4 * 0x10));
            FUN_00ffd450(0,lVar10,*(undefined8 *)(PTR_PTR_02729a20 + uVar4 * 8));
            break;
          default:
            goto switchD_0142082c_caseD_3;
          case 7:
            uVar8 = *(undefined8 *)(puVar3 + uVar4 * 0x10 + 8);
            goto LAB_01420980;
          }
        }
        else {
          FUN_01420ac0(&local_88,uVar4 & 0xffffffff);
          iVar6 = (int)plVar1[1];
          if (iVar6 != *(int *)(lVar5 + 0x660)) goto LAB_01420818;
switchD_0142082c_caseD_3:
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 4);
LAB_01420994:
      uVar8 = *param_2;
      *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)(param_1 + 0x658) = uVar8;
      lVar10 = param_2[2];
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(param_1 + 0x668);
      *(long *)(param_1 + 0x668) = lVar10;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      uVar8 = param_2[3];
      *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 0x670) = uVar8;
      lVar10 = param_2[5];
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(param_1 + 0x680);
      *(long *)(param_1 + 0x680) = lVar10;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      uVar8 = param_2[6];
      *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(param_2 + 7);
      *(undefined8 *)(param_1 + 0x688) = uVar8;
      lVar10 = param_2[8];
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(param_1 + 0x698);
      *(long *)(param_1 + 0x698) = lVar10;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      uVar8 = param_2[9];
      *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 0x6a0) = uVar8;
      lVar10 = param_2[0xb];
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(param_1 + 0x6b0);
      *(long *)(param_1 + 0x6b0) = lVar10;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


