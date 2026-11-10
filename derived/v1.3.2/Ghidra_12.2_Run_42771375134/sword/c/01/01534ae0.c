/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01534ae0; name: FUN_01534ae0
 */


void FUN_01534ae0(long param_1,int *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if (*(char *)((long)param_2 + 0xd) != '\0') {
    return;
  }
  uVar3 = FUN_01534d30();
  if ((uVar3 & 1) == 0) {
    uVar2 = (uint)*(ushort *)(param_2 + 1) * 7 + param_2[6];
    if (*param_2 != 0x365) {
      uVar2 = (uint)*(ushort *)(param_2 + 1);
    }
    uVar6 = 0;
    if (uVar2 < 0x3f) {
      uVar6 = uVar2;
    }
    FUN_01534180(param_1,*param_2,param_2[2],(char)param_2[3],uVar6,param_2[5]);
  }
  iVar4 = *param_2;
  uVar2 = FUN_014ae400(0,iVar4);
  if (uVar2 == 0) {
    uVar2 = FUN_014ae400(1,iVar4);
    if (uVar2 == 0) {
      uVar2 = FUN_014ae400(2,iVar4);
      if (uVar2 == 0) goto LAB_01534c08;
      bVar1 = 0xd2 < uVar2;
      uVar6 = 0xd1;
      iVar4 = 2;
    }
    else {
      bVar1 = 0xd3 < uVar2;
      uVar6 = 0xd2;
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 0;
    uVar6 = 399;
    bVar1 = 400 < uVar2;
  }
  uVar2 = (uVar2 & 0xffff) - 1;
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 <= uVar6) {
    if (iVar4 == 2) {
      param_1 = param_1 + 0x72f0;
      lVar7 = param_1 + (ulong)uVar2 * 0x30;
    }
    else if (iVar4 == 1) {
      param_1 = param_1 + 0x4b60;
      lVar7 = param_1 + (ulong)uVar2 * 0x30;
    }
    else {
      param_1 = param_1 + 0x60;
      lVar7 = param_1 + (ulong)uVar2 * 0x30;
    }
    if (lVar7 != 0) {
      puVar5 = (uint *)(param_1 + (ulong)uVar2 * 0x30 + 0x20);
      uVar2 = *puVar5;
      *puVar5 = uVar2 | 1;
      if (param_3 - 2U < 9) {
        uVar6 = *(uint *)(&DAT_02172f60 + (long)(int)(param_3 - 2U) * 4);
      }
      else {
        uVar6 = 0;
      }
      *puVar5 = 4 << (ulong)(uVar6 & 0x1f) & 0x7ffcU | uVar2 | 1;
      return;
    }
  }
LAB_01534c08:
  iVar4 = *param_2;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x2a8);
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  uVar3 = 0;
  do {
    if ((&DAT_02172e18)[uVar3] == iVar4) {
LAB_01534c90:
      lVar8 = (uVar3 >> 5 & 0x7ffffff) * 4;
      *(uint *)(lVar7 + 0xf0 + lVar8) =
           *(uint *)(lVar7 + 0xf0 + lVar8) | 1 << (ulong)((uint)uVar3 & 0x1f);
      return;
    }
    if ((&DAT_02172e1c)[uVar3] == iVar4) {
      uVar3 = uVar3 + 1;
      goto LAB_01534c90;
    }
    uVar3 = uVar3 + 2;
    if (0x4f < uVar3) {
      return;
    }
  } while( true );
}


