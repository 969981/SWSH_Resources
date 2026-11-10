/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047f130; name: FUN_0047f130
 */


undefined4 FUN_0047f130(float param_1,long param_2,undefined4 *param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  puVar6 = *(undefined8 **)(param_3 + 0x22);
  if (puVar6 == (undefined8 *)0x0) {
    local_60 = FUN_0045b630();
    if (local_60 == 0) {
      uVar3 = 2;
      FUN_00479190(&local_50);
      goto joined_r0x0047f1ec;
    }
    puVar6 = &local_78;
  }
  plVar4 = (long *)FUN_0047f2d0(puVar6,param_3,*(undefined4 *)(param_2 + 0x10));
  if (plVar4 == (long *)0x0) {
    uVar3 = 0x34;
    FUN_00479190(&local_50);
  }
  else {
    *(undefined1 *)((long)plVar4 + 0xcc) = *(undefined1 *)(param_3 + 0x61);
    *(undefined4 *)(plVar4 + 0x19) = param_3[0x60];
    *(byte *)((long)plVar4 + 0xcc) = *(byte *)((long)plVar4 + 0xcc) | 1;
    *(undefined4 *)(plVar4 + 0x1a) = *param_3;
    iVar2 = FUN_0047f560(param_2);
    if (iVar2 == 2) {
      uVar3 = 1;
    }
    else {
      uVar5 = FUN_004881d0(param_2);
      uVar3 = 2;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
    }
    FUN_00441c50(plVar4,uVar3,*(undefined8 *)(param_3 + 0x28),param_3 + 0x26);
    if (*(long *)(param_3 + 0x22) != 0) {
      FUN_00441d30(plVar4,*(long *)(param_3 + 0x22) + 0x28);
    }
    fVar1 = 0.5;
    if ((float)*(uint *)PTR_DAT_02712b38 * param_1 <= 0.0) {
      fVar1 = -0.5;
    }
    uVar3 = FUN_0047f3f0(puVar6,param_3,(int)(fVar1 + (float)*(uint *)PTR_DAT_02712b38 * param_1),
                         plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    FUN_00479190(&local_50);
  }
joined_r0x0047f1ec:
  if (local_60 != 0) {
    FUN_0045b680();
  }
  return uVar3;
}


