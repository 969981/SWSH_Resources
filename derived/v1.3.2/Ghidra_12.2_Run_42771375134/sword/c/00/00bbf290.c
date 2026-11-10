/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbf290; name: FUN_00bbf290
 */


void FUN_00bbf290(long param_1)

{
  undefined2 uVar1;
  uint extraout_w0;
  uint uVar2;
  int *piVar3;
  uint extraout_var;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint local_38;
  uint uStack_34;
  
  piVar3 = (int *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  FUN_016b8190();
  local_38 = extraout_w0;
  uStack_34 = extraout_var;
  if (*piVar3 == 0) {
    lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    uVar2 = FUN_0150b350(lVar7);
    uVar6 = piVar3[1];
    if (uVar2 != (uVar6 & 0xff)) {
      FUN_00bb37b0(param_1,uVar6 & 0xff,0);
      FUN_0150b270(lVar7,(char)piVar3[1]);
      uVar6 = piVar3[1];
    }
    local_38 = (uVar6 >> 8 & 0x3f) + 1;
    uStack_34 = (uVar6 >> 0xe & 0x3f) + 2;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
  }
  else if (*piVar3 == 1) {
    uVar6 = piVar3[1];
    if (*(uint *)(param_1 + 0x614) != (uVar6 & 0xff)) {
      FUN_00bb3b90(param_1);
      *(uint *)(param_1 + 0x614) = (uint)*(byte *)(piVar3 + 1);
      uVar6 = piVar3[1];
    }
    local_38 = uVar6 >> 8 & 0x3f;
    uStack_34 = (uVar6 >> 0xe & 0x3f) + 2;
  }
  uVar4 = FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  FUN_016b7990(uVar4,&local_38,1,0);
  if (uStack_34 < 2) {
LAB_00bbf434:
    uVar1 = 0xffff;
  }
  else {
    if (local_38 == 0) {
      if (5 < (int)(uStack_34 - 2)) goto LAB_00bbf434;
      uVar4 = 1;
      iVar5 = 0;
    }
    else {
      if (4 < uStack_34 - 2) goto LAB_00bbf434;
      iVar5 = local_38 - 1;
      uVar4 = 0;
    }
    uVar1 = FUN_00bcfb20(uVar4,iVar5);
  }
  *(undefined2 *)(param_1 + 0x624) = uVar1;
  FUN_00bd1f40(*(undefined8 *)(param_1 + 0x5f0),0);
  *(undefined4 *)(param_1 + 0x608) = 6;
  return;
}


