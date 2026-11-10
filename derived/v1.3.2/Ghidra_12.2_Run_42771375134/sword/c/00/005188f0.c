/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005188f0; name: FUN_005188f0
 */


void FUN_005188f0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  int local_b0 [2];
  undefined8 local_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined1 auStack_38 [8];
  ulong local_30;
  long local_28;
  
  DAT_025fa230 = 0xffffffff;
  FUN_00550fe0(local_b0,param_1);
  if (local_b0[0] == 0) {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      iVar1 = -3;
      goto LAB_00518b74;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: ",0x278);
    pcVar3 = "License text is not set.\n";
  }
  else {
    local_30 = 0;
    local_28 = 0;
    FUN_005bb440(auStack_38,&local_28,&local_30,&DAT_01d6a1b9,0x20,
                 "UX11ioIamWgDk2jhDkcBZldEPs60Pp0n",0x20);
    if (local_28 != 0) {
      FUN_00551100(auStack_48,local_28,local_30 & 0xffffffff,0xffffffff);
      FUN_005bb580(auStack_90);
      FUN_00550fe0(auStack_a0,local_a8);
      FUN_00551670(auStack_88,auStack_a0);
      FUN_00551380(auStack_a0);
      FUN_00550fe0(auStack_a0,local_40);
      FUN_00551670(auStack_78,auStack_a0);
      FUN_00551380(auStack_a0);
      iVar1 = FUN_005bb6a0(auStack_90);
      if (local_28 != 0) {
        FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,local_28 + -8);
      }
      if (iVar1 != 0) {
        iVar2 = FUN_005bb680(auStack_90);
        if (iVar2 == 1) {
          if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: ",0x294);
            pcVar3 = "License is not valid.\n";
            goto LAB_00518b20;
          }
        }
        else if (iVar2 == 2) {
          if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: ",0x298);
            pcVar3 = "License is expired.\n";
LAB_00518b20:
            FUN_00517ae0(pcVar3);
          }
        }
        else if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: ",0x29c);
          pcVar3 = "Unexpected License Error.\n";
          goto LAB_00518b20;
        }
      }
      uVar4 = FUN_005bb690(auStack_90);
      FUN_00550fe0(auStack_a0,uVar4);
      iVar2 = FUN_00552180(auStack_a0,"YEBIS_PROMOTION2016MAY_",0,0xffffffff);
      FUN_00519190(0 < iVar2);
      FUN_00551380(auStack_a0);
      FUN_005bb5e0(auStack_90);
      FUN_00551380(auStack_48);
      goto LAB_00518b74;
    }
    iVar1 = -3;
    if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_00518b74;
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: ",0x283);
    pcVar3 = "License is not valid.\n";
  }
  FUN_00517ae0(pcVar3);
  iVar1 = -3;
LAB_00518b74:
  DAT_025fa230 = iVar1;
  FUN_00551380(local_b0);
  return;
}


