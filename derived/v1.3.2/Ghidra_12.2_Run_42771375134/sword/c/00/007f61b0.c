/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f61b0; name: FUN_007f61b0
 */


undefined8
FUN_007f61b0(undefined8 *param_1,long *param_2,long *param_3,long param_4,string *param_5,
            undefined8 *param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  int *piVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  ulong local_a8;
  ulong local_a0;
  void *local_98;
  byte local_78 [16];
  void *local_68;
  
  if (param_2 == param_3) {
    plVar7 = (long *)*param_6;
    if (plVar7 != (long *)0x0) {
      lVar13 = -1;
      piVar10 = (int *)*plVar7;
      while (lVar13 = lVar13 + 1, lVar13 < (plVar7[1] - *plVar7) * 0x10000000 >> 0x20) {
        iVar2 = *piVar10;
        piVar10 = piVar10 + 4;
        if (iVar2 == *(int *)(param_4 + 0x38)) {
          std::operator+("Option \"",param_5);
          puVar5 = (ulong *)std::string::append((char *)local_78);
          local_a8 = *puVar5;
          local_a0 = puVar5[1];
          local_98 = (void *)puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          FUN_007eaaf0(*param_1,param_1[1] + 0x18,param_1[2],7,&local_a8);
          if ((local_a8 & 1) != 0) {
            operator_delete(local_98);
          }
          if ((local_78[0] & 1) != 0) {
            operator_delete(local_68);
          }
          return 0;
        }
      }
    }
  }
  else {
    lVar12 = 0;
    lVar13 = 0;
    plVar7 = (long *)*param_6;
    if (plVar7 != (long *)0x0) goto LAB_007f630c;
    while (lVar13 < 0) {
      while( true ) {
        lVar8 = *plVar7;
        if (*(int *)(lVar8 + lVar12) == *(int *)(*param_2 + 0x38)) {
          iVar2 = *(int *)(*param_2 + 0x3c);
          if (iVar2 == 10) {
            if ((*(int *)(lVar8 + lVar12 + 4) == 4) &&
               (uVar4 = FUN_007f61b0(param_1,param_2 + 1,param_3,param_4,param_5,
                                     *(undefined8 *)(lVar8 + lVar12 + 8)), (uVar4 & 1) == 0)) {
              return 0;
            }
          }
          else {
            if (iVar2 != 0xb) {
              FUN_00801270(&local_a8,3,
                           "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                           ,0x16e7);
              uVar6 = FUN_00800f30(&local_a8,"Invalid wire type for CPPTYPE_MESSAGE: ");
              uVar6 = FUN_00801220(uVar6,iVar2);
              FUN_00800fa0(local_78,uVar6);
              FUN_00801290(&local_a8);
              return 0;
            }
            if (*(int *)(lVar8 + lVar12 + 4) == 3) {
              local_a8 = 0;
              pbVar9 = *(byte **)(lVar8 + lVar12 + 8);
              pbVar11 = *(byte **)(pbVar9 + 0x10);
              bVar3 = (*pbVar9 & 1) == 0;
              if (bVar3) {
                pbVar11 = pbVar9 + 1;
              }
              uVar1 = (uint)(*pbVar9 >> 1);
              if (!bVar3) {
                uVar1 = *(uint *)(pbVar9 + 8);
              }
              uVar4 = FUN_008103b0(&local_a8,pbVar11,uVar1);
              if (((uVar4 & 1) == 0) ||
                 (uVar4 = FUN_007f61b0(param_1,param_2 + 1,param_3,param_4,param_5,&local_a8),
                 (uVar4 & 1) != 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (local_a8 != 0) {
                FUN_0080f500(&local_a8);
              }
              if (bVar3) {
                return 0;
              }
            }
          }
        }
        lVar13 = lVar13 + 1;
        lVar12 = lVar12 + 0x10;
        plVar7 = (long *)*param_6;
        if (plVar7 == (long *)0x0) break;
LAB_007f630c:
        if ((int)((ulong)(plVar7[1] - *plVar7) >> 4) <= lVar13) {
          return 1;
        }
      }
    }
  }
  return 1;
}


