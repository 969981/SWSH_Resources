/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009db9c0; name: FUN_009db9c0
 */


undefined8 FUN_009db9c0(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined1 auVar16 [16];
  
  puVar7 = PTR_DAT_02716d10;
  plVar1 = (long *)(param_1 + 0x50);
  plVar2 = (long *)(param_1 + 0x58);
  plVar3 = (long *)(param_1 + 0x60);
  plVar4 = (long *)(param_1 + 0x68);
LAB_009dba08:
  pbVar15 = (byte *)*param_2;
  if (pbVar15 < (byte *)param_2[1]) {
    bVar6 = *pbVar15;
    uVar9 = (uint)bVar6;
    if ((char)bVar6 < '\x01') {
      if (((byte *)param_2[1] <= pbVar15 + 1) ||
         (bVar5 = pbVar15[1], -1 < (char)((bVar5 ^ 0x80) & bVar6))) goto LAB_009dc294;
      uVar9 = (uVar9 + (uint)bVar5 * 0x80) - 0x80;
      uVar14 = (ulong)uVar9;
      *(uint *)(param_2 + 4) = uVar9;
      *param_2 = (ulong)(pbVar15 + 2);
    }
    else {
      uVar14 = (ulong)bVar6;
      *(uint *)(param_2 + 4) = uVar9;
      *param_2 = (ulong)(pbVar15 + 1);
    }
LAB_009dba3c:
    uVar9 = (uint)uVar14;
    switch((uint)(uVar14 >> 3) & 0x1fffffff) {
    case 1:
      if (uVar9 != 8) break;
      if (((byte *)*param_2 < (byte *)param_2[1]) && (bVar6 = *(byte *)*param_2, -1 < (char)bVar6))
      {
        *(ulong *)(param_1 + 0x18) = (ulong)bVar6;
        pbVar15 = (byte *)(*param_2 + 1);
        *param_2 = (ulong)pbVar15;
        pbVar11 = (byte *)param_2[1];
        if (pbVar11 <= pbVar15) goto LAB_009dba08;
      }
      else {
        auVar16 = FUN_0080d3e0(param_2);
        *(long *)(param_1 + 0x18) = auVar16._0_8_;
        if ((auVar16._8_8_ & 1) == 0) {
          return 0;
        }
        pbVar15 = (byte *)*param_2;
        pbVar11 = (byte *)param_2[1];
        if (pbVar11 <= pbVar15) goto LAB_009dba08;
      }
      if (*pbVar15 == 0x10) {
        pbVar15 = pbVar15 + 1;
        *param_2 = (ulong)pbVar15;
        if (pbVar15 < pbVar11) {
LAB_009dbab0:
          if ((char)*pbVar15 < '\0') goto LAB_009dbb64;
          *(ulong *)(param_1 + 0x20) = (ulong)*pbVar15;
          pbVar15 = (byte *)(*param_2 + 1);
          *param_2 = (ulong)pbVar15;
          pbVar11 = (byte *)param_2[1];
          if (pbVar11 <= pbVar15) goto LAB_009dba08;
        }
        else {
LAB_009dbb64:
          auVar16 = FUN_0080d3e0(param_2);
          *(long *)(param_1 + 0x20) = auVar16._0_8_;
          if ((auVar16._8_8_ & 1) == 0) {
            return 0;
          }
          pbVar15 = (byte *)*param_2;
          pbVar11 = (byte *)param_2[1];
          if (pbVar11 <= pbVar15) goto LAB_009dba08;
        }
        if (*pbVar15 == 0x18) {
          pbVar15 = pbVar15 + 1;
          *param_2 = (ulong)pbVar15;
          if (pbVar11 <= pbVar15) goto LAB_009dbaf4;
LAB_009dbb9c:
          uVar9 = (uint)*pbVar15;
          if ((char)*pbVar15 < '\0') goto LAB_009dc248;
          *(uint *)(param_1 + 0x28) = uVar9;
          pbVar15 = (byte *)(*param_2 + 1);
          *param_2 = (ulong)pbVar15;
          pbVar11 = (byte *)param_2[1];
          if (pbVar15 < pbVar11) {
LAB_009dbbc4:
            if (*pbVar15 == 0x20) {
              pbVar15 = pbVar15 + 1;
              *param_2 = (ulong)pbVar15;
              if (pbVar11 <= pbVar15) goto LAB_009dbbe0;
LAB_009dbbfc:
              uVar9 = (uint)*pbVar15;
              if ((char)*pbVar15 < '\0') goto LAB_009dc224;
              *(uint *)(param_1 + 0x2c) = uVar9;
              pbVar15 = (byte *)(*param_2 + 1);
              *param_2 = (ulong)pbVar15;
              pbVar11 = (byte *)param_2[1];
              if (pbVar15 < pbVar11) {
LAB_009dbc24:
                if (*pbVar15 == 0x28) {
                  pbVar15 = pbVar15 + 1;
                  *param_2 = (ulong)pbVar15;
                  if (pbVar15 < pbVar11) goto LAB_009dbc5c;
LAB_009dbc40:
                  uVar9 = 0;
LAB_009dc200:
                  lVar10 = FUN_0080d5d0(param_2,uVar9);
                  *(int *)(param_1 + 0x30) = (int)lVar10;
                  if (lVar10 < 0) {
                    return 0;
                  }
                  pbVar15 = (byte *)*param_2;
                  pbVar11 = (byte *)param_2[1];
                  if (pbVar15 < pbVar11) {
LAB_009dbc84:
                    if (*pbVar15 == 0x30) {
                      pbVar15 = pbVar15 + 1;
                      *param_2 = (ulong)pbVar15;
                      if (pbVar15 < pbVar11) goto LAB_009dbcbc;
LAB_009dbca0:
                      uVar9 = 0;
LAB_009dc1dc:
                      lVar10 = FUN_0080d5d0(param_2,uVar9);
                      *(int *)(param_1 + 0x34) = (int)lVar10;
                      if (lVar10 < 0) {
                        return 0;
                      }
                      pbVar15 = (byte *)*param_2;
                      pbVar11 = (byte *)param_2[1];
                      if (pbVar15 < pbVar11) {
LAB_009dbce4:
                        if (*pbVar15 == 0x38) {
                          pbVar15 = pbVar15 + 1;
                          *param_2 = (ulong)pbVar15;
                          if (pbVar15 < pbVar11) goto LAB_009dbd1c;
LAB_009dbd00:
                          uVar9 = 0;
LAB_009dc1b8:
                          lVar10 = FUN_0080d5d0(param_2,uVar9);
                          *(int *)(param_1 + 0x38) = (int)lVar10;
                          if (lVar10 < 0) {
                            return 0;
                          }
                          pbVar15 = (byte *)*param_2;
                          pbVar11 = (byte *)param_2[1];
                          if (pbVar15 < pbVar11) {
LAB_009dbd44:
                            if (*pbVar15 == 0x40) {
                              pbVar15 = pbVar15 + 1;
                              *param_2 = (ulong)pbVar15;
                              if (pbVar15 < pbVar11) goto LAB_009dbd7c;
LAB_009dbd60:
                              uVar9 = 0;
LAB_009dc194:
                              lVar10 = FUN_0080d5d0(param_2,uVar9);
                              *(int *)(param_1 + 0x3c) = (int)lVar10;
                              if (lVar10 < 0) {
                                return 0;
                              }
                              pbVar15 = (byte *)*param_2;
                              pbVar11 = (byte *)param_2[1];
                              if (pbVar15 < pbVar11) {
LAB_009dbda4:
                                if (*pbVar15 == 0x48) {
                                  pbVar15 = pbVar15 + 1;
                                  *param_2 = (ulong)pbVar15;
                                  if (pbVar15 < pbVar11) goto LAB_009dbddc;
LAB_009dbdc0:
                                  uVar9 = 0;
LAB_009dc170:
                                  lVar10 = FUN_0080d5d0(param_2,uVar9);
                                  *(int *)(param_1 + 0x40) = (int)lVar10;
                                  if (lVar10 < 0) {
                                    return 0;
                                  }
                                  pbVar15 = (byte *)*param_2;
                                  pbVar11 = (byte *)param_2[1];
                                  if (pbVar15 < pbVar11) {
LAB_009dbe04:
                                    if (*pbVar15 == 0x50) {
                                      pbVar15 = pbVar15 + 1;
                                      *param_2 = (ulong)pbVar15;
                                      if (pbVar15 < pbVar11) goto LAB_009dbe3c;
LAB_009dbe20:
                                      uVar9 = 0;
LAB_009dc14c:
                                      lVar10 = FUN_0080d5d0(param_2,uVar9);
                                      *(int *)(param_1 + 0x44) = (int)lVar10;
                                      if (lVar10 < 0) {
                                        return 0;
                                      }
                                      pbVar15 = (byte *)*param_2;
                                      pbVar11 = (byte *)param_2[1];
                                      if (pbVar15 < pbVar11) {
LAB_009dbe64:
                                        if (*pbVar15 == 0x58) {
                                          pbVar15 = pbVar15 + 1;
                                          *param_2 = (ulong)pbVar15;
                                          if (pbVar15 < pbVar11) goto LAB_009dbe9c;
LAB_009dbe80:
                                          uVar9 = 0;
LAB_009dc128:
                                          lVar10 = FUN_0080d5d0(param_2,uVar9);
                                          *(int *)(param_1 + 0x48) = (int)lVar10;
                                          if (lVar10 < 0) {
                                            return 0;
                                          }
                                          pbVar15 = (byte *)*param_2;
                                          pbVar11 = (byte *)param_2[1];
                                          if (pbVar15 < pbVar11) {
LAB_009dbec4:
                                            if (*pbVar15 == 0x60) {
                                              pbVar15 = pbVar15 + 1;
                                              *param_2 = (ulong)pbVar15;
                                              if (pbVar15 < pbVar11) goto LAB_009dbefc;
LAB_009dbee0:
                                              uVar9 = 0;
LAB_009dc104:
                                              lVar10 = FUN_0080d5d0(param_2,uVar9);
                                              *(int *)(param_1 + 0x4c) = (int)lVar10;
                                              if (lVar10 < 0) {
                                                return 0;
                                              }
                                              pcVar13 = (char *)*param_2;
                                              if (pcVar13 < (char *)param_2[1]) {
LAB_009dbf24:
                                                if (*pcVar13 == 'j') {
                                                  *param_2 = (ulong)(pcVar13 + 1);
                                                  lVar12 = *(long *)puVar7;
                                                  lVar10 = *plVar1;
                                                  if (lVar10 == lVar12) {
LAB_009dbf64:
                                                    FUN_009b58d0(plVar1,lVar12);
                                                    lVar10 = *plVar1;
                                                  }
LAB_009dbf74:
                                                  uVar14 = FUN_008160d0(param_2,lVar10);
                                                  if ((uVar14 & 1) == 0) {
                                                    return 0;
                                                  }
                                                  pcVar13 = (char *)*param_2;
                                                  if ((pcVar13 < (char *)param_2[1]) &&
                                                     (*pcVar13 == 'r')) {
                                                    *param_2 = (ulong)(pcVar13 + 1);
                                                    lVar12 = *(long *)puVar7;
                                                    lVar10 = *plVar2;
                                                    if (lVar10 == lVar12) {
LAB_009dbfcc:
                                                      FUN_009b58d0(plVar2,lVar12);
                                                      lVar10 = *plVar2;
                                                    }
LAB_009dbfdc:
                                                    uVar14 = FUN_008160d0(param_2,lVar10);
                                                    if ((uVar14 & 1) == 0) {
                                                      return 0;
                                                    }
                                                    pcVar13 = (char *)*param_2;
                                                    if ((pcVar13 < (char *)param_2[1]) &&
                                                       (*pcVar13 == 'z')) {
                                                      *param_2 = (ulong)(pcVar13 + 1);
                                                      lVar12 = *(long *)puVar7;
                                                      lVar10 = *plVar3;
                                                      if (lVar10 == lVar12) {
LAB_009dc034:
                                                        FUN_009b58d0(plVar3,lVar12);
                                                        lVar10 = *plVar3;
                                                      }
LAB_009dc044:
                                                      uVar14 = FUN_008160d0(param_2,lVar10);
                                                      if ((uVar14 & 1) == 0) {
                                                        return 0;
                                                      }
                                                      pcVar13 = (char *)*param_2;
                                                      if (((1 < (int)param_2[1] - (int)pcVar13) &&
                                                          (*pcVar13 == -0x7e)) &&
                                                         (pcVar13[1] == '\x01')) {
                                                        *param_2 = (ulong)(pcVar13 + 2);
LAB_009dc0b0:
                                                        lVar10 = *plVar4;
                                                        if (lVar10 == *(long *)puVar7) {
                                                          FUN_009b58d0(plVar4,*(long *)puVar7);
                                                          lVar10 = *plVar4;
                                                        }
                                                        uVar14 = FUN_008160d0(param_2,lVar10);
                                                        if ((uVar14 & 1) == 0) {
                                                          return 0;
                                                        }
                                                        if ((*param_2 == param_2[1]) &&
                                                           ((*(int *)((long)param_2 + 0x2c) != 0 ||
                                                            ((int)param_2[3] == (int)param_2[5]))))
                                                        {
                                                          *(undefined4 *)(param_2 + 4) = 0;
                                                          *(undefined1 *)((long)param_2 + 0x24) = 1;
                                                          return 1;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_009dba08;
    case 2:
      if (uVar9 == 0x10) {
        pbVar15 = (byte *)*param_2;
        if (pbVar15 < (byte *)param_2[1]) goto LAB_009dbab0;
        goto LAB_009dbb64;
      }
      break;
    case 3:
      if (uVar9 == 0x18) {
        pbVar15 = (byte *)*param_2;
        if (pbVar15 < (byte *)param_2[1]) goto LAB_009dbb9c;
LAB_009dbaf4:
        uVar9 = 0;
LAB_009dc248:
        lVar10 = FUN_0080d5d0(param_2,uVar9);
        *(int *)(param_1 + 0x28) = (int)lVar10;
        if (lVar10 < 0) {
          return 0;
        }
        pbVar15 = (byte *)*param_2;
        pbVar11 = (byte *)param_2[1];
        if (pbVar15 < pbVar11) goto LAB_009dbbc4;
        goto LAB_009dba08;
      }
      break;
    case 4:
      if (uVar9 == 0x20) {
        pbVar15 = (byte *)*param_2;
        if (pbVar15 < (byte *)param_2[1]) goto LAB_009dbbfc;
LAB_009dbbe0:
        uVar9 = 0;
LAB_009dc224:
        lVar10 = FUN_0080d5d0(param_2,uVar9);
        *(int *)(param_1 + 0x2c) = (int)lVar10;
        if (lVar10 < 0) {
          return 0;
        }
        pbVar15 = (byte *)*param_2;
        pbVar11 = (byte *)param_2[1];
        if (pbVar15 < pbVar11) goto LAB_009dbc24;
        goto LAB_009dba08;
      }
      break;
    case 5:
      if (uVar9 == 0x28) {
        pbVar15 = (byte *)*param_2;
        if ((byte *)param_2[1] <= pbVar15) goto LAB_009dbc40;
LAB_009dbc5c:
        uVar9 = (uint)*pbVar15;
        if ((char)*pbVar15 < '\0') goto LAB_009dc200;
        *(uint *)(param_1 + 0x30) = uVar9;
        pbVar15 = (byte *)(*param_2 + 1);
        *param_2 = (ulong)pbVar15;
        pbVar11 = (byte *)param_2[1];
        if (pbVar15 < pbVar11) goto LAB_009dbc84;
        goto LAB_009dba08;
      }
      break;
    case 6:
      if (uVar9 == 0x30) {
        pbVar15 = (byte *)*param_2;
        if ((byte *)param_2[1] <= pbVar15) goto LAB_009dbca0;
LAB_009dbcbc:
        uVar9 = (uint)*pbVar15;
        if ((char)*pbVar15 < '\0') goto LAB_009dc1dc;
        *(uint *)(param_1 + 0x34) = uVar9;
        pbVar15 = (byte *)(*param_2 + 1);
        *param_2 = (ulong)pbVar15;
        pbVar11 = (byte *)param_2[1];
        if (pbVar15 < pbVar11) goto LAB_009dbce4;
        goto LAB_009dba08;
      }
      break;
    case 7:
      if (uVar9 == 0x38) {
        pbVar15 = (byte *)*param_2;
        if ((byte *)param_2[1] <= pbVar15) goto LAB_009dbd00;
LAB_009dbd1c:
        uVar9 = (uint)*pbVar15;
        if ((char)*pbVar15 < '\0') goto LAB_009dc1b8;
        *(uint *)(param_1 + 0x38) = uVar9;
        pbVar15 = (byte *)(*param_2 + 1);
        *param_2 = (ulong)pbVar15;
        pbVar11 = (byte *)param_2[1];
        if (pbVar15 < pbVar11) goto LAB_009dbd44;
        goto LAB_009dba08;
      }
      break;
    case 8:
      if (uVar9 == 0x40) {
        pbVar15 = (byte *)*param_2;
        if ((byte *)param_2[1] <= pbVar15) goto LAB_009dbd60;
LAB_009dbd7c:
        uVar9 = (uint)*pbVar15;
        if ((char)*pbVar15 < '\0') goto LAB_009dc194;
        *(uint *)(param_1 + 0x3c) = uVar9;
        pbVar15 = (byte *)(*param_2 + 1);
        *param_2 = (ulong)pbVar15;
        pbVar11 = (byte *)param_2[1];
        if (pbVar15 < pbVar11) goto LAB_009dbda4;
        goto LAB_009dba08;
      }
      break;
    case 9:
      if (uVar9 == 0x48) {
        pbVar15 = (byte *)*param_2;
        if ((byte *)param_2[1] <= pbVar15) goto LAB_009dbdc0;
LAB_009dbddc:
        uVar9 = (uint)*pbVar15;
        if ((char)*pbVar15 < '\0') goto LAB_009dc170;
        *(uint *)(param_1 + 0x40) = uVar9;
        pbVar15 = (byte *)(*param_2 + 1);
        *param_2 = (ulong)pbVar15;
        pbVar11 = (byte *)param_2[1];
        if (pbVar15 < pbVar11) goto LAB_009dbe04;
        goto LAB_009dba08;
      }
      break;
    case 10:
      if (uVar9 == 0x50) {
        pbVar15 = (byte *)*param_2;
        if ((byte *)param_2[1] <= pbVar15) goto LAB_009dbe20;
LAB_009dbe3c:
        uVar9 = (uint)*pbVar15;
        if ((char)*pbVar15 < '\0') goto LAB_009dc14c;
        *(uint *)(param_1 + 0x44) = uVar9;
        pbVar15 = (byte *)(*param_2 + 1);
        *param_2 = (ulong)pbVar15;
        pbVar11 = (byte *)param_2[1];
        if (pbVar15 < pbVar11) goto LAB_009dbe64;
        goto LAB_009dba08;
      }
      break;
    case 0xb:
      if (uVar9 == 0x58) {
        pbVar15 = (byte *)*param_2;
        if ((byte *)param_2[1] <= pbVar15) goto LAB_009dbe80;
LAB_009dbe9c:
        uVar9 = (uint)*pbVar15;
        if ((char)*pbVar15 < '\0') goto LAB_009dc128;
        *(uint *)(param_1 + 0x48) = uVar9;
        pbVar15 = (byte *)(*param_2 + 1);
        *param_2 = (ulong)pbVar15;
        pbVar11 = (byte *)param_2[1];
        if (pbVar15 < pbVar11) goto LAB_009dbec4;
        goto LAB_009dba08;
      }
      break;
    case 0xc:
      if (uVar9 == 0x60) {
        pbVar15 = (byte *)*param_2;
        if ((byte *)param_2[1] <= pbVar15) goto LAB_009dbee0;
LAB_009dbefc:
        uVar9 = (uint)*pbVar15;
        if ((char)*pbVar15 < '\0') goto LAB_009dc104;
        *(uint *)(param_1 + 0x4c) = uVar9;
        pcVar13 = (char *)(*param_2 + 1);
        *param_2 = (ulong)pcVar13;
        if (pcVar13 < (char *)param_2[1]) goto LAB_009dbf24;
        goto LAB_009dba08;
      }
      break;
    case 0xd:
      if (uVar9 == 0x6a) {
        lVar12 = *(long *)puVar7;
        lVar10 = *plVar1;
        if (lVar10 == lVar12) goto LAB_009dbf64;
        goto LAB_009dbf74;
      }
      break;
    case 0xe:
      if (uVar9 == 0x72) {
        lVar12 = *(long *)puVar7;
        lVar10 = *plVar2;
        if (lVar10 == lVar12) goto LAB_009dbfcc;
        goto LAB_009dbfdc;
      }
      break;
    case 0xf:
      if (uVar9 == 0x7a) {
        lVar12 = *(long *)puVar7;
        lVar10 = *plVar3;
        if (lVar10 == lVar12) goto LAB_009dc034;
        goto LAB_009dc044;
      }
      break;
    case 0x10:
      if (uVar9 == 0x82) goto LAB_009dc0b0;
      break;
    default:
      goto switchD_009dba54_default;
    }
    if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
      return 1;
    }
  }
  else {
    uVar9 = 0;
LAB_009dc294:
    uVar9 = FUN_0080d8c0(param_2,uVar9);
    bVar8 = uVar9 - 1 < 0x3fff;
    uVar14 = (ulong)CONCAT14(bVar8,uVar9);
    *(uint *)(param_2 + 4) = uVar9;
    if (bVar8) goto LAB_009dba3c;
switchD_009dba54_default:
    if (uVar9 == 0) {
      return 1;
    }
    if ((uVar9 & 7) == 4) {
      return 1;
    }
  }
  uVar14 = FUN_008148c0(param_2);
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  goto LAB_009dba08;
}


