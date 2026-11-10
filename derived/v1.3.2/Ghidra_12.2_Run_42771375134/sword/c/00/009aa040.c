/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aa040; name: FUN_009aa040
 */


void FUN_009aa040(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 auStack_c8 [80];
  undefined1 *local_78;
  undefined1 local_70;
  undefined8 local_68;
  char local_58 [8];
  
  FUN_0093b070(auStack_c8);
  local_78 = auStack_c8;
  FUN_00942450(param_1);
  uVar5 = FUN_00925910();
  FUN_00948da0(uVar5,local_58,&local_78);
  iVar2 = FUN_00942620(param_1);
  if (iVar2 == 2) {
    uVar5 = FUN_009423a0(param_1);
    uVar3 = FUN_00917fb0(uVar5,0xba);
  }
  else {
    uVar3 = 0;
  }
  FUN_0093b2e0(auStack_c8);
  uVar9 = 0;
  do {
    puVar6 = (undefined1 *)FUN_0093b2f0(auStack_c8);
    if (puVar6 == (undefined1 *)0x0) break;
    uVar7 = FUN_008e1600();
    if ((((uVar7 & 1) == 0) && (uVar7 = FUN_008e28f0(puVar6,5), (uVar7 & 1) == 0)) &&
       (uVar7 = FUN_008e28f0(puVar6,4), (uVar7 & 1) == 0)) {
      uVar4 = FUN_009aa1f0(param_1,puVar6,iVar2 != 2);
      local_70 = 1;
      local_68 = 0;
      local_78 = puVar6;
      FUN_00942450(param_1);
      uVar5 = FUN_009251d0();
      FUN_0094af90(uVar5,local_58,&local_78);
      uVar9 = uVar9 | uVar4;
    }
    FUN_009423f0(param_1);
    uVar5 = FUN_00942fe0();
    uVar7 = FUN_00943290(uVar5,5);
  } while ((uVar7 & 1) == 0);
  if ((iVar2 == 2) && ((uVar9 & 1) != 0)) {
    local_78 = (undefined1 *)CONCAT71(local_78._1_7_,0x1f);
    FUN_00942450(param_1);
    uVar5 = FUN_00925630();
    FUN_00945320(uVar5,local_58,&local_78);
    uVar8 = 0x1f2;
    if (local_58[0] != '\x04') {
      uVar8 = 0;
    }
    uVar1 = 0x1f1;
    if (local_58[0] != '\x03') {
      uVar1 = uVar8;
    }
    uVar5 = FUN_009423a0(0x1f1,param_1);
    FUN_009181d0(uVar5,uVar3,0xba,uVar1,0xffff0000);
  }
  return;
}


