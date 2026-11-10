/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f9cb90; name: FUN_00f9cb90
 */


undefined8 FUN_00f9cb90(undefined8 param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  plVar4 = (long *)FUN_00f9ccd0();
  lVar5 = *(long *)(param_3 + 8);
  *(undefined8 *)(param_3 + 8) = 0;
  plVar4[1] = lVar5;
  plVar4[2] = *(long *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = 0;
  lVar6 = *(long *)(param_3 + 0x18);
  plVar4[3] = lVar6;
  lVar5 = *(long *)(param_3 + 0x20);
  plVar4[4] = lVar5;
  *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(param_3 + 0x28);
  if (lVar5 != 0) {
    uVar8 = plVar4[2];
    uVar7 = *(ulong *)(lVar6 + 8);
    if ((uVar8 - 1 & uVar8) == 0) {
      uVar7 = uVar8 - 1 & uVar7;
    }
    else if (uVar8 <= uVar7) {
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar7 / uVar8;
      }
      uVar7 = uVar7 - uVar1 * uVar8;
    }
    *(long **)(plVar4[1] + uVar7 * 8) = plVar4 + 3;
    *(long *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  lVar5 = *(long *)(param_3 + 0x38);
  plVar4[6] = *(long *)(param_3 + 0x30);
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[7] = lVar5;
  plVar4[8] = 0;
  puVar2 = PTR_DAT_02721d80;
  plVar4[8] = *(long *)(param_3 + 0x40);
  plVar4[9] = *(long *)(param_3 + 0x48);
  plVar4[10] = *(long *)(param_3 + 0x50);
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x50) = 0;
  *(undefined1 *)(plVar4 + 0xb) = *(undefined1 *)(param_3 + 0x58);
  *plVar4 = (long)(puVar2 + 0x10);
  memcpy(plVar4 + 0xc,(void *)(param_3 + 0x60),0xb40);
  iVar3 = FUN_0175cfd0(param_1,*param_2);
  if (iVar3 != 0) {
    FUN_01760580(param_1,PTR_LAB_02722ce8,0);
    FUN_017613e0(param_1,0xfffffffe,&DAT_01d114fc);
  }
  FUN_01761960(param_1,0xfffffffe);
  return 1;
}


