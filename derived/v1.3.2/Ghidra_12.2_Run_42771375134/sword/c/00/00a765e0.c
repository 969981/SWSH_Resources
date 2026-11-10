/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a765e0; name: FUN_00a765e0
 */


undefined8 FUN_00a765e0(long param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  local_88 = 0xa6266324f9affa41;
  local_80 = "land_adjust_table";
  local_78 = 0x11;
  FUN_012b4250(auStack_70,param_1 + 0x1a20,&local_88);
  lVar5 = FUN_012b40f0(auStack_70);
  uVar7 = 0;
  if (lVar5 != 0) {
    uVar8 = 0;
    iVar3 = -1;
    do {
      FUN_012b4190(auStack_a8,auStack_70,uVar8);
      local_88 = 0xf3b47097d1e17785;
      local_80 = "monsno";
      local_78 = 6;
      FUN_012b4250(auStack_98,auStack_a8,&local_88);
      iVar2 = FUN_012b4420(auStack_98,0);
      iVar1 = iVar3;
      if (iVar2 == *param_2) {
        FUN_012b4190(auStack_a8,auStack_70,uVar8);
        local_88 = 0x5069f221ce2139d6;
        local_80 = "gType";
        local_78 = 5;
        FUN_012b4250(auStack_98,auStack_a8,&local_88);
        iVar2 = FUN_012b4420(auStack_98,0);
        if (iVar2 != 0) {
          FUN_012b4190(auStack_a8,auStack_70,uVar8);
          local_88 = 0x5069f221ce2139d6;
          local_80 = "gType";
          local_78 = 5;
          FUN_012b4250(auStack_98,auStack_a8,&local_88);
          iVar3 = FUN_012b4420(auStack_98,0);
          if ((iVar3 != 1) || (param_2[5] != 1)) {
            FUN_012b4190(auStack_a8,auStack_70,uVar8);
            local_88 = 0x5069f221ce2139d6;
            local_80 = "gType";
            local_78 = 5;
            FUN_012b4250(auStack_98,auStack_a8,&local_88);
            iVar3 = FUN_012b4420(auStack_98,0);
            if ((iVar3 != 2) || (param_2[5] != 2)) goto LAB_00a768e8;
          }
LAB_00a76910:
          uVar8 = uVar8 & 0xffffffff;
          goto LAB_00a76914;
        }
        FUN_012b4190(auStack_a8,auStack_70,uVar8);
        local_88 = 0x430f1d44ee020fcc;
        local_80 = "formno";
        local_78 = 6;
        FUN_012b4250(auStack_98,auStack_a8,&local_88);
        uVar4 = FUN_012b4420(auStack_98,0);
        if ((uVar4 == *(ushort *)(param_2 + 1)) && (param_2[5] == 0)) {
          FUN_012b4190(auStack_a8,auStack_70,uVar8);
          local_88 = 0x68a3732777251727;
          local_80 = "sex";
          local_78 = 3;
          FUN_012b4250(auStack_98,auStack_a8,&local_88);
          uVar4 = FUN_012b4420(auStack_98,0);
          if (uVar4 == *(ushort *)(param_2 + 2)) goto LAB_00a76910;
          FUN_012b4190(auStack_a8,auStack_70,uVar8);
          local_88 = 0x68a3732777251727;
          local_80 = "sex";
          local_78 = 3;
          FUN_012b4250(auStack_98,auStack_a8,&local_88);
          iVar2 = FUN_012b4420(auStack_98,0);
          iVar1 = (int)uVar8;
          if (iVar2 != 0) {
            iVar1 = iVar3;
          }
        }
      }
LAB_00a768e8:
      uVar8 = uVar8 + 1;
      uVar6 = FUN_012b40f0(auStack_70);
      iVar3 = iVar1;
    } while (uVar8 < uVar6);
    if (iVar1 == -1) {
      uVar7 = 0;
    }
    else {
      uVar8 = (ulong)iVar1;
LAB_00a76914:
      FUN_012b4190(&local_88,auStack_70,uVar8);
      FUN_012b4070(param_3,&local_88);
      uVar7 = 1;
    }
  }
  return uVar7;
}


