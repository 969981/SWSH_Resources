/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f42b0; name: FUN_007f42b0
 */


void FUN_007f42b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  long lVar8;
  int *piVar9;
  __tree_node_base *p_Var10;
  __tree_node_base *p_Var11;
  string *psVar12;
  ulong local_f8;
  ulong local_f0;
  void *local_e8;
  byte local_c8 [16];
  void *local_b8;
  ulong local_b0;
  ulong local_a8;
  void *local_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  __tree_node_base *local_80;
  __tree_node_base *local_78;
  long local_70;
  
  if (((*(byte *)(*(long *)(param_2 + 0x20) + 0x30) & 1) == 0) ||
     (*(char *)(*(long *)(param_2 + 0x20) + 0x50) == '\0')) {
    local_78 = (__tree_node_base *)0x0;
    local_70 = 0;
    local_80 = (__tree_node_base *)&local_78;
    if (0 < *(int *)(param_2 + 0x2c)) {
      lVar8 = 0;
      do {
        lVar5 = *(long *)(param_2 + 0x30);
        piVar9 = (int *)(lVar5 + lVar8 * 0x28 + 0x10);
        iVar2 = *piVar9;
        p_Var10 = (__tree_node_base *)&local_78;
        p_Var7 = local_78;
        p_Var11 = (__tree_node_base *)&local_78;
        if (local_78 == (__tree_node_base *)0x0) {
          psVar12 = *(string **)(lVar5 + lVar8 * 0x28 + 8);
LAB_007f4574:
          p_Var7 = *(__tree_node_base **)p_Var11;
joined_r0x007f4578:
          if (p_Var7 == (__tree_node_base *)0x0) {
            p_Var7 = operator_new(0x40);
            *(int *)(p_Var7 + 0x20) = iVar2;
            *(undefined8 *)(p_Var7 + 0x30) = 0;
            *(undefined8 *)(p_Var7 + 0x38) = 0;
            *(undefined8 *)(p_Var7 + 0x28) = 0;
            *(__tree_node_base **)(p_Var7 + 0x10) = p_Var10;
            *(undefined8 *)p_Var7 = 0;
            *(undefined8 *)(p_Var7 + 8) = 0;
            *(__tree_node_base **)p_Var11 = p_Var7;
            if (*(__tree_node_base **)local_80 == (__tree_node_base *)0x0) {
              p_Var10 = p_Var7;
            }
            else {
              p_Var10 = *(__tree_node_base **)p_Var11;
              local_80 = *(__tree_node_base **)local_80;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_78,p_Var10);
            local_70 = local_70 + 1;
          }
          std::string::operator=((string *)(p_Var7 + 0x28),psVar12);
        }
        else {
          do {
            if (iVar2 <= *(int *)(p_Var7 + 0x20)) {
              p_Var10 = p_Var7;
            }
            p_Var7 = *(__tree_node_base **)(p_Var7 + (ulong)(*(int *)(p_Var7 + 0x20) < iVar2) * 8);
          } while (p_Var7 != (__tree_node_base *)0x0);
          if ((p_Var10 == (__tree_node_base *)&local_78) || (iVar2 < *(int *)(p_Var10 + 0x20))) {
            psVar12 = *(string **)(lVar5 + lVar8 * 0x28 + 8);
            iVar1 = *(int *)(local_78 + 0x20);
            p_Var10 = local_78;
            while( true ) {
              while (iVar2 < iVar1) {
                p_Var7 = *(__tree_node_base **)p_Var10;
                p_Var11 = p_Var10;
                if (p_Var7 == (__tree_node_base *)0x0) {
                  p_Var7 = *(__tree_node_base **)p_Var10;
                  goto joined_r0x007f4578;
                }
                p_Var10 = p_Var7;
                iVar1 = *(int *)(p_Var7 + 0x20);
              }
              if (iVar2 <= iVar1) break;
              p_Var11 = p_Var10 + 8;
              p_Var7 = *(__tree_node_base **)p_Var11;
              if (p_Var7 == (__tree_node_base *)0x0) break;
              iVar1 = *(int *)(p_Var7 + 0x20);
              p_Var10 = p_Var7;
            }
            goto LAB_007f4574;
          }
          std::operator+("\"",*(string **)(lVar5 + lVar8 * 0x28 + 8));
          puVar4 = (ulong *)std::string::append((char *)local_c8);
          local_b0 = *puVar4;
          local_a8 = puVar4[1];
          local_a0 = (void *)puVar4[2];
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          iVar2 = *piVar9;
          p_Var10 = (__tree_node_base *)&local_78;
          if (local_78 == (__tree_node_base *)0x0) {
          }
          else {
            iVar1 = *(int *)(local_78 + 0x20);
            p_Var7 = local_78;
            while( true ) {
              while (p_Var11 = p_Var7, iVar2 < iVar1) {
                p_Var6 = *(__tree_node_base **)p_Var7;
                if (p_Var6 == (__tree_node_base *)0x0) {
                  p_Var6 = *(__tree_node_base **)p_Var7;
                  goto joined_r0x007f4328;
                }
                p_Var10 = p_Var7;
                p_Var7 = p_Var6;
                iVar1 = *(int *)(p_Var6 + 0x20);
              }
              if (iVar2 <= iVar1) break;
              p_Var10 = p_Var7 + 8;
              p_Var7 = *(__tree_node_base **)p_Var10;
              if (p_Var7 == (__tree_node_base *)0x0) break;
              iVar1 = *(int *)(p_Var7 + 0x20);
            }
          }
          p_Var6 = *(__tree_node_base **)p_Var10;
          p_Var7 = p_Var10;
joined_r0x007f4328:
          if (p_Var6 == (__tree_node_base *)0x0) {
            p_Var6 = operator_new(0x40);
            *(int *)(p_Var6 + 0x20) = iVar2;
            *(undefined8 *)(p_Var6 + 0x30) = 0;
            *(undefined8 *)(p_Var6 + 0x38) = 0;
            *(undefined8 *)(p_Var6 + 0x28) = 0;
            *(__tree_node_base **)(p_Var6 + 0x10) = p_Var11;
            *(undefined8 *)p_Var6 = 0;
            *(undefined8 *)(p_Var6 + 8) = 0;
            *(__tree_node_base **)p_Var7 = p_Var6;
            if (*(__tree_node_base **)local_80 == (__tree_node_base *)0x0) {
              p_Var10 = p_Var6;
            }
            else {
              p_Var10 = *(__tree_node_base **)p_Var7;
              local_80 = *(__tree_node_base **)local_80;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_78,p_Var10);
            local_70 = local_70 + 1;
          }
          p_Var10 = p_Var6 + 0x29;
          if (((byte)p_Var6[0x28] & 1) != 0) {
            p_Var10 = *(__tree_node_base **)(p_Var6 + 0x38);
          }
          puVar4 = (ulong *)std::string::append((char *)&local_b0,(ulong)p_Var10);
          local_f8 = *puVar4;
          local_f0 = puVar4[1];
          local_e8 = (void *)puVar4[2];
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          puVar4 = (ulong *)std::string::append((char *)&local_f8);
          local_98 = *puVar4;
          local_90 = puVar4[1];
          local_88 = (void *)puVar4[2];
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          if ((local_f8 & 1) == 0) {
            if ((local_b0 & 1) != 0) goto LAB_007f446c;
LAB_007f4404:
            if ((local_c8[0] & 1) != 0) goto LAB_007f447c;
LAB_007f440c:
            if (*(char *)(*(long *)(param_2 + 0x20) + 0x50) == '\0') goto LAB_007f4490;
LAB_007f4418:
            FUN_00801270(&local_f8,2,
                         "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                         ,0x14f4);
            uVar3 = FUN_00800f60(&local_f8,&local_98);
            FUN_00800fa0(&local_b0,uVar3);
            FUN_00801290(&local_f8);
          }
          else {
            operator_delete(local_e8);
            if ((local_b0 & 1) == 0) goto LAB_007f4404;
LAB_007f446c:
            operator_delete(local_a0);
            if ((local_c8[0] & 1) == 0) goto LAB_007f440c;
LAB_007f447c:
            operator_delete(local_b8);
            if (*(char *)(*(long *)(param_2 + 0x20) + 0x50) != '\0') goto LAB_007f4418;
LAB_007f4490:
            FUN_007eaaf0(param_1,*(undefined8 *)(param_2 + 8),param_3,1,&local_98);
          }
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_2 + 0x2c));
    }
    FUN_007f9150(&local_80,local_78);
  }
  return;
}


