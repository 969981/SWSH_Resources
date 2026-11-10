/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f3660; name: FUN_007f3660
 */


undefined1  [16] FUN_007f3660(long *param_1,string *param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  string sVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  __tree_node_base *p_Var8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  string *psVar12;
  long *plVar13;
  __tree_node_base *p_Var14;
  __tree_node_base *p_Var15;
  long lVar16;
  __tree_node_base *p_Var17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  
  auVar20 = FUN_007f91f0(param_1,*param_1,param_2);
  uVar18 = auVar20._8_8_;
  iVar6 = auVar20._0_4_;
  if (iVar6 == 0) {
    return auVar20;
  }
  if (*(char *)(*param_1 + 0x28) == '\0') {
    return auVar20;
  }
  switch(iVar6) {
  case 1:
  case 4:
  case 6:
    uVar18 = *(ulong *)(uVar18 + 0x10);
    uVar19 = param_1[10];
    if (uVar18 != uVar19) {
LAB_007f36d8:
      plVar11 = param_1 + 0xd;
      for (plVar9 = (long *)*plVar11; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if ((ulong)plVar9[4] <= uVar18) {
          if (uVar18 <= (ulong)plVar9[4]) goto LAB_007f38b0;
          plVar9 = plVar9 + 1;
        }
      }
      if (iVar6 == 8) {
        pbVar7 = *(byte **)(uVar19 + 8);
        sVar4 = *param_2;
        pcVar1 = (char *)(ulong)(*pbVar7 >> 1);
        if ((*pbVar7 & 1) != 0) {
          pcVar1 = *(char **)(pbVar7 + 8);
        }
        pcVar2 = (char *)(ulong)((byte)sVar4 >> 1);
        if (((byte)sVar4 & 1) != 0) {
          pcVar2 = *(char **)(param_2 + 8);
        }
        if (pcVar2 <= pcVar1) {
          psVar12 = *(string **)(param_2 + 0x10);
          if (((byte)sVar4 & 1) == 0) {
            psVar12 = param_2 + 1;
          }
          iVar6 = std::string::compare((ulong)pbVar7,0,pcVar2,(ulong)psVar12);
          if (iVar6 == 0) {
            pbVar7 = *(byte **)(uVar19 + 8);
            bVar5 = *pbVar7;
            if ((bVar5 & 1) == 0) {
              uVar19 = (ulong)(bVar5 >> 1);
            }
            else {
              uVar19 = *(ulong *)(pbVar7 + 8);
            }
            uVar3 = (ulong)((byte)*param_2 >> 1);
            if (((byte)*param_2 & 1) != 0) {
              uVar3 = *(ulong *)(param_2 + 8);
            }
            if (uVar19 == uVar3) {
              return auVar20;
            }
            if ((bVar5 & 1) == 0) {
              bVar5 = pbVar7[uVar3 + 1];
            }
            else {
              bVar5 = *(byte *)(*(long *)(pbVar7 + 0x10) + uVar3);
            }
            if (bVar5 == 0x2e) {
              return auVar20;
            }
          }
        }
        if ((long *)param_1[0xc] != plVar11) {
          plVar9 = (long *)param_1[0xc];
          do {
            while( true ) {
              lVar16 = plVar9[4];
              if (lVar16 != 0) {
                pbVar7 = *(byte **)(lVar16 + 8);
                sVar4 = *param_2;
                pcVar1 = (char *)(ulong)(*pbVar7 >> 1);
                if ((*pbVar7 & 1) != 0) {
                  pcVar1 = *(char **)(pbVar7 + 8);
                }
                pcVar2 = (char *)(ulong)((byte)sVar4 >> 1);
                if (((byte)sVar4 & 1) != 0) {
                  pcVar2 = *(char **)(param_2 + 8);
                }
                if (pcVar2 <= pcVar1) {
                  psVar12 = param_2 + 1;
                  if (((byte)sVar4 & 1) != 0) {
                    psVar12 = *(string **)(param_2 + 0x10);
                  }
                  iVar6 = std::string::compare((ulong)pbVar7,0,pcVar2,(ulong)psVar12);
                  if (iVar6 == 0) {
                    pbVar7 = *(byte **)(lVar16 + 8);
                    bVar5 = *pbVar7;
                    if ((bVar5 & 1) == 0) {
                      uVar19 = (ulong)(bVar5 >> 1);
                    }
                    else {
                      uVar19 = *(ulong *)(pbVar7 + 8);
                    }
                    uVar3 = (ulong)((byte)*param_2 >> 1);
                    if (((byte)*param_2 & 1) != 0) {
                      uVar3 = *(ulong *)(param_2 + 8);
                    }
                    if (uVar19 == uVar3) {
                      return auVar20;
                    }
                    if ((bVar5 & 1) == 0) {
                      bVar5 = pbVar7[uVar3 + 1];
                    }
                    else {
                      bVar5 = *(byte *)(*(long *)(pbVar7 + 0x10) + uVar3);
                    }
                    if (bVar5 == 0x2e) {
                      return auVar20;
                    }
                  }
                }
              }
              plVar10 = (long *)plVar9[1];
              if ((long *)plVar9[1] == (long *)0x0) break;
              do {
                plVar9 = plVar10;
                plVar10 = (long *)*plVar9;
              } while ((long *)*plVar9 != (long *)0x0);
LAB_007f3850:
              if (plVar9 == plVar11) goto LAB_007f3880;
            }
            plVar10 = plVar9 + 2;
            plVar13 = (long *)*plVar10;
            if ((long *)*plVar13 != plVar9) {
              do {
                lVar16 = *plVar10;
                plVar10 = (long *)(lVar16 + 0x10);
                plVar9 = (long *)*plVar10;
              } while (*plVar9 != lVar16);
              goto LAB_007f3850;
            }
            plVar9 = plVar13;
          } while (plVar13 != plVar11);
        }
      }
LAB_007f3880:
      param_1[0x12] = uVar18;
      std::string::operator=((string *)(param_1 + 0x13),param_2);
      return ZEXT816(0);
    }
    break;
  case 2:
    uVar18 = *(ulong *)(uVar18 + 0x30);
    uVar19 = param_1[10];
    if (uVar18 != uVar19) goto LAB_007f36d8;
    break;
  case 3:
  case 7:
    uVar18 = *(ulong *)(*(long *)(uVar18 + 0x10) + 0x10);
    uVar19 = param_1[10];
    if (uVar18 != uVar19) goto LAB_007f36d8;
    break;
  case 5:
    uVar18 = *(ulong *)(*(long *)(uVar18 + 0x18) + 0x10);
    uVar19 = param_1[10];
    if (uVar18 != uVar19) goto LAB_007f36d8;
    break;
  case 8:
    uVar19 = param_1[10];
    if (uVar18 != uVar19) goto LAB_007f36d8;
    break;
  default:
    uVar18 = 0;
    uVar19 = param_1[10];
    if (uVar19 != 0) goto LAB_007f36d8;
  }
LAB_007f38b0:
  p_Var15 = (__tree_node_base *)(param_1 + 0x10);
  p_Var8 = *(__tree_node_base **)p_Var15;
  if (p_Var8 != (__tree_node_base *)0x0) {
    p_Var14 = p_Var8;
    p_Var17 = p_Var15;
    do {
      if (*(ulong *)(p_Var14 + 0x20) >= uVar18) {
        p_Var17 = p_Var14;
      }
      p_Var14 = *(__tree_node_base **)(p_Var14 + (ulong)(*(ulong *)(p_Var14 + 0x20) < uVar18) * 8);
    } while (p_Var14 != (__tree_node_base *)0x0);
    if ((p_Var17 != p_Var15) && (*(ulong *)(p_Var17 + 0x20) <= uVar18)) {
      plVar9 = *(long **)(p_Var17 + 8);
      if (*(long **)(p_Var17 + 8) == (long *)0x0) {
        p_Var15 = p_Var17 + 0x10;
        plVar11 = *(long **)p_Var15;
        if ((__tree_node_base *)*plVar11 != p_Var17) {
          do {
            lVar16 = *(long *)p_Var15;
            p_Var15 = (__tree_node_base *)(lVar16 + 0x10);
            plVar11 = *(long **)p_Var15;
          } while (*plVar11 != lVar16);
        }
      }
      else {
        do {
          plVar11 = plVar9;
          plVar9 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      if ((__tree_node_base *)param_1[0xf] == p_Var17) {
        param_1[0xf] = (long)plVar11;
      }
      param_1[0x11] = param_1[0x11] + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var8,p_Var17);
      operator_delete(p_Var17);
    }
  }
  return auVar20;
}


