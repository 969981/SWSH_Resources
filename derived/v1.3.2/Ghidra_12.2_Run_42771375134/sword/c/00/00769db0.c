/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00769db0; name: FUN_00769db0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00769db0(long param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    local_250 = 0;
    uStack_248 = 0;
    local_260 = 0;
    local_258 = 0;
    local_270 = 0;
    uStack_268 = 0;
    FUN_0199c2d0(&local_270);
    local_258 = *(undefined8 *)(param_1 + 0x54);
    local_270 = CONCAT44(*(undefined4 *)(param_1 + 0x54),(undefined4)local_270);
    uStack_268._0_4_ = *(undefined4 *)(param_1 + 0x58);
    uVar4 = FUN_006fe990(*(undefined8 *)(param_1 + 0x90));
    FUN_0199d570(param_2,uVar4,*(long *)(param_1 + 0x88) + (long)param_3 * 0x70 + 0x58,&local_270);
    iVar2 = *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x58);
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar3 + 1;
    }
    iVar3 = iVar2 * iVar3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    uStack_268 = CONCAT44(uStack_268._4_4_,iVar1 >> 1);
    local_270 = CONCAT44(iVar2 >> 1,iVar3);
    local_258 = CONCAT44(iVar1 >> 1,iVar2 >> 1);
    uVar4 = FUN_006fe990(*(undefined8 *)(param_1 + 0x98));
    FUN_0199d570(param_2,uVar4,*(long *)(param_1 + 0x88) + (long)param_3 * 0x70 + 0x58,&local_270);
    *(undefined1 *)(param_1 + 0x1d0) = 0;
  }
  if (*(char *)(param_1 + 0x1d1) == '\0') {
    return;
  }
  FUN_0199d090(param_2,param_1 + 0x68);
  local_78 = 0;
  uStack_70 = 0;
  thunk_FUN_0199c850(*(long *)(param_1 + 0x60) + 0x58,&local_78);
  FUN_0199d200(param_2,0,&local_78,0,
               (long)*(int *)(*(long *)(param_1 + 0x60) + 0xc4) *
               (long)*(int *)(*(long *)(param_1 + 0x60) + 0xc0));
  FUN_0199d200(param_2,1,&local_78,0,
               (long)*(int *)(*(long *)(param_1 + 0x60) + 0xc4) *
               (long)*(int *)(*(long *)(param_1 + 0x60) + 0xc0));
  FUN_0199d0f0(param_2,*(undefined8 *)(param_1 + 0xa0),0x11);
  FUN_00784060(&local_270,*(undefined8 *)(param_1 + 0x90));
  uVar4 = FUN_006fc6f0(&local_270);
  FUN_0199e200(param_2,0,4,uVar4);
  FUN_00784490(&local_270);
  FUN_00784060(&local_270,*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_006fc6f0(&local_270);
  FUN_0199e200(param_2,1,4,uVar4);
  FUN_00784490(&local_270);
  uVar4 = *(undefined8 *)(param_1 + 0x1c8);
  local_58 = 10;
  local_68 = 0x8e2374c57720c53e;
  pcStack_60 = "ColorSpace";
  FUN_006cf0a0(&local_270,&local_68);
  lVar5 = FUN_00734c00(uVar4,0,&local_270);
  if (lVar5 == 0) {
    puVar6 = (undefined4 *)0x0;
    lVar5 = 0;
  }
  else {
    iVar1 = *(int *)PTR_DAT_02715500;
    *(int *)(lVar5 + 0x138) = iVar1;
    FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,lVar5);
    lVar5 = lVar5 + (long)iVar1 * 0x70 + 0x58;
    puVar6 = (undefined4 *)thunk_FUN_0199c7e0(lVar5);
  }
  if (local_258 != 0) {
    (**(code **)(*(long *)(local_258 + 0x48) + 0x18))();
    local_258 = 0;
  }
  uVar4 = _DAT_01d4aa60;
  uVar8 = _UNK_01d4aa68;
  uVar9 = _DAT_01d4aa70;
  uVar10 = _UNK_01d4aa78;
  uVar11 = DAT_01d4c09c;
  uVar12 = _DAT_01d4ac50;
  uVar13 = _UNK_01d4ac58;
  switch(param_4) {
  case 0:
  case 4:
    break;
  case 1:
    uVar11 = 0;
    uVar4 = _DAT_01d4a5a0;
    uVar8 = _UNK_01d4a5a8;
    uVar9 = _DAT_01d4ab90;
    uVar10 = _UNK_01d4ab98;
    uVar12 = _DAT_01d4b9e0;
    uVar13 = _UNK_01d4b9e8;
    break;
  case 2:
    uVar4 = _DAT_01d4b410;
    uVar8 = _UNK_01d4b418;
    uVar9 = _DAT_01d4b020;
    uVar10 = _UNK_01d4b028;
    uVar12 = _DAT_01d4a4b0;
    uVar13 = _UNK_01d4a4b8;
    break;
  case 3:
    uVar4 = _DAT_01d4a590;
    uVar8 = _UNK_01d4a598;
    uVar9 = _DAT_01d4b300;
    uVar10 = _UNK_01d4b308;
    uVar11 = 0;
    uVar12 = _DAT_01d4ab80;
    uVar13 = _UNK_01d4ab88;
    break;
  default:
    goto switchD_0076a034_default;
  }
  *(undefined8 *)(puVar6 + 6) = uVar13;
  *(undefined8 *)(puVar6 + 4) = uVar12;
  *(undefined8 *)(puVar6 + 10) = uVar10;
  *(undefined8 *)(puVar6 + 8) = uVar9;
  *(undefined8 *)(puVar6 + 1) = 0x3f0080813f008081;
  uVar10 = _UNK_01d4b578;
  uVar9 = _DAT_01d4b570;
  *puVar6 = uVar11;
  *(undefined8 *)(puVar6 + 0xe) = uVar8;
  *(undefined8 *)(puVar6 + 0xc) = uVar4;
  *(undefined8 *)(puVar6 + 0x12) = uVar10;
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
switchD_0076a034_default:
  uVar4 = *(undefined8 *)(param_1 + 0x1c8);
  local_58 = 10;
  local_68 = 0x8e2374c57720c53e;
  pcStack_60 = "ColorSpace";
  FUN_006cf0a0(&local_270,&local_68);
  lVar7 = FUN_00734c60(uVar4,0,&local_270);
  if (local_258 != 0) {
    (**(code **)(*(long *)(local_258 + 0x48) + 0x18))();
    local_258 = 0;
  }
  if (lVar7 != 0) {
    FUN_0199e120(param_2,*(undefined4 *)(lVar7 + 0x3c),*(undefined4 *)(lVar7 + 0x38),
                 lVar7 + (long)*(int *)PTR_DAT_02715500 * 8 + 0x28);
  }
  FUN_0199cc20(param_2,4,4,0);
  if (lVar5 != 0) {
    thunk_FUN_0199c800(lVar5);
  }
  return;
}


