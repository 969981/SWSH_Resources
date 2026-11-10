/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014794d0; name: FUN_014794d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014794d0(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_01479558:
    iVar1 = *_DAT_00000060;
  }
  else {
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar11 != (undefined8 *)0x0) {
      plVar5 = (long *)(**(code **)*puVar11)(puVar11);
      plVar6 = (long *)FUN_0146e370();
      if (plVar5 == (long *)0x0) goto LAB_01479558;
      do {
        if (plVar5 == plVar6) {
          puVar12 = puVar11 + -10;
          iVar1 = *(int *)puVar11[2];
          piVar2 = (int *)puVar11[2];
          goto joined_r0x01479790;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    iVar1 = *_DAT_00000060;
  }
  puVar12 = (undefined8 *)0x0;
  piVar2 = _DAT_00000060;
joined_r0x01479790:
  if (iVar1 == 2) {
    uVar4 = piVar2[4];
    if ((uint)piVar2[0x42] <= uVar4) {
      uVar4 = (piVar2[0x42] + uVar4) - 3;
    }
  }
  else {
    uVar4 = piVar2[4];
  }
  uVar7 = (**(code **)(**(long **)(piVar2 + 2) + 0x50))(*(long **)(piVar2 + 2),uVar4);
  uVar8 = FUN_0087d610(uVar7,2);
  if ((uVar8 & 1) == 0) {
    uVar7 = 4;
    *(undefined8 *)(param_1 + 0xb0) = 0x100000000;
    *(undefined8 *)(param_1 + 0xb8) = 0x300000002;
    *(undefined4 *)(param_1 + 0xc0) = 4;
    local_68 = DAT_0216ee50;
    local_60 = DAT_0216ee58;
    local_78 = DAT_0216ee40;
    local_70 = DAT_0216ee48;
    local_48 = DAT_0216ee70;
    local_58 = DAT_0216ee60;
    uStack_50 = DAT_0216ee68;
    uVar4 = FUN_00884820(*(undefined8 *)(puVar12[0xc] + 8));
    if (uVar4 < 2) {
      *(undefined8 *)(param_1 + 0xb4) = 0x300000002;
      *(undefined4 *)(param_1 + 0xbc) = 4;
      local_70 = 0xea265dc08497835b;
      local_68 = 0xea265ec08497850e;
      local_60 = 0xea265fc0849786c1;
      local_58 = 0xcbf29ce484222645;
      uStack_50 = 0xcbf29ce484222645;
    }
    else {
      uVar7 = 5;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xb0) = 0x100000000;
    *(undefined4 *)(param_1 + 0xb8) = 4;
    local_68 = DAT_0216ee88;
    local_60 = DAT_0216ee90;
    local_78 = DAT_0216ee78;
    local_70 = DAT_0216ee80;
    local_48 = DAT_0216eea8;
    local_58 = DAT_0216ee98;
    uStack_50 = DAT_0216eea0;
    uVar4 = FUN_00884820(*(undefined8 *)(puVar12[0xc] + 8));
    if (uVar4 < 2) {
      uVar7 = 2;
      *(undefined4 *)(param_1 + 0xb4) = 4;
      local_70 = 0xea265fc0849786c1;
    }
    else {
      uVar7 = 3;
    }
  }
  FUN_0147a040(puVar12,&local_78,uVar7);
  lVar10 = *(long *)(param_1 + 0x88);
  FUN_006cf0a0(&local_98,&DAT_026a3668);
  lVar3 = local_80;
  lVar10 = *(long *)(lVar10 + 0x5e0);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(lVar10 + 0x18);
  *(undefined1 *)(lVar10 + 0x479) = 0;
  *(undefined8 *)(lVar10 + 0x2d8) = local_98;
  *(undefined8 *)(lVar10 + 0x2e0) = uStack_90;
  *(undefined8 *)(lVar10 + 0x2e8) = local_88;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar10 + 0x2f0);
  *(long *)(lVar10 + 0x2f0) = lVar3;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  return;
}


