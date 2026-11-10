/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00492260; name: FUN_00492260
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_00492260(long param_1,undefined8 param_2,undefined2 *param_3,undefined4 *param_4)

{
  short sVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  byte local_64 [4];
  
  *param_3 = 0;
  *param_4 = 0;
  uVar4 = (**(code **)(**(long **)(param_1 + 200) + 0x20))();
  if (uVar4 == 0) {
    return (long *)0x0;
  }
  if (uVar4 == 1) {
    uVar5 = (**(code **)(**(long **)(param_1 + 200) + 0x28))(*(long **)(param_1 + 200),0);
    *param_4 = uVar5;
    plVar8 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,uVar5,0);
    return plVar8;
  }
  if ((*(ushort *)(param_1 + 0xfd) & 7) == 1) {
    lVar9 = FUN_00491b70(param_1,param_2);
    if (lVar9 == 0) {
      return (long *)0x0;
    }
    lVar11 = 0;
  }
  else {
    lVar11 = FUN_00492080(param_1,uVar4,param_2);
    if (lVar11 == 0) {
      return (long *)0x0;
    }
    lVar9 = 0;
  }
  uVar12 = 0;
  bVar2 = false;
  iVar6 = 0;
  do {
    local_64[0] = 1;
    if (bVar2) {
      iVar7 = 0;
      if ((iVar6 + 1U & 0xffff) < uVar4) {
        iVar7 = iVar6 + 1;
      }
      iVar6 = iVar7;
      if ((*(byte *)(param_1 + 0xfc) & 0x30) == 0) {
        if (*(short *)(param_1 + 0xfa) != 0) goto LAB_00492420;
        local_64[0] = 1;
LAB_00492468:
        bVar3 = local_64[0];
        FUN_00492580(param_1,lVar11,iVar7);
        goto joined_r0x00492478;
      }
      uVar10 = FUN_004947b0(lVar11,iVar7);
      if ((uVar10 & 1) == 0) {
LAB_00492420:
        bVar3 = FUN_00494880(lVar11,iVar7);
        local_64[0] = ~bVar3 & 1;
        if ((bVar3 & 1) == 0) goto LAB_00492468;
      }
    }
    else {
      if ((*(ushort *)(param_1 + 0xfd) & 7) == 1) {
        local_64[0] = 1;
        sVar1 = *(short *)(lVar9 + 10);
        if (*(char *)(lVar9 + 8) == '\0') {
          if (sVar1 == 0) {
            iVar7 = 1;
            *(undefined2 *)(lVar9 + 10) = 1;
            *(undefined1 *)(lVar9 + 8) = 1;
          }
          else {
            iVar7 = sVar1 + -1;
            *(short *)(lVar9 + 10) = (short)iVar7;
          }
        }
        else {
          iVar6 = (**(code **)(**(long **)(param_1 + 200) + 0x20))();
          if (sVar1 + 1 == iVar6) {
            if ((*(byte *)(param_1 + 0xfd) >> 5 & 1) == 0) {
              iVar7 = 0;
              *(undefined2 *)(lVar9 + 10) = 0;
            }
            else {
              iVar7 = *(ushort *)(lVar9 + 10) - 1;
              *(short *)(lVar9 + 10) = (short)iVar7;
              *(undefined1 *)(lVar9 + 8) = 0;
            }
          }
          else {
            iVar7 = *(ushort *)(lVar9 + 10) + 1;
            *(short *)(lVar9 + 10) = (short)iVar7;
          }
        }
      }
      else {
        iVar7 = FUN_00492820(param_1,lVar11,local_64,0);
        bVar3 = local_64[0];
joined_r0x00492478:
        if (bVar3 == 0) {
          iVar6 = iVar7;
          if (!bVar2) {
            return (long *)0x0;
          }
          goto joined_r0x00492398;
        }
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 200) + 0x28))(*(long **)(param_1 + 200),iVar7);
      *param_4 = uVar5;
      plVar8 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,uVar5,0);
      iVar6 = iVar7;
      if (plVar8 != (long *)0x0) {
        uVar10 = (**(code **)(*plVar8 + 0x90))(plVar8);
        if ((uVar10 & 1) != 0) {
          *param_3 = (short)iVar7;
          return plVar8;
        }
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
joined_r0x00492398:
    if ((uVar12 == 0) && ((*(byte *)(param_1 + 0xfd) & 7) == 0)) {
      bVar2 = (bool)(bVar2 | (*(byte *)(param_1 + 0xfc) & 0x30) != 0x10);
      uVar12 = 1;
      if (uVar4 < 2) {
        return (long *)0x0;
      }
    }
    else {
      uVar12 = uVar12 + 1;
      if (uVar4 <= uVar12) {
        return (long *)0x0;
      }
    }
  } while( true );
}


