/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5f360; name: FUN_00e5f360
 */


void FUN_00e5f360(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_70 = PTR_DAT_02715270 + 0x10;
  local_68 = *(undefined8 *)(param_1 + 0x228);
  uStack_60 = *(undefined8 *)(param_1 + 0x230);
  local_58 = *(undefined8 *)(param_1 + 0x238);
  uStack_50 = *(undefined8 *)(param_1 + 0x240);
  local_48 = *(undefined8 *)(param_1 + 0x248);
  uStack_40 = *(undefined8 *)(param_1 + 0x250);
  uVar3 = FUN_006c5d60(&local_70);
  if ((uVar3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0xb28) = 0;
  }
  else {
    FUN_006c5d20(auStack_b0,&local_70);
    puVar1 = PTR_DAT_02710848;
    local_78 = local_90;
    lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar6 + 0x7d8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    lVar6 = FUN_00e331a0(lVar4,&local_78);
    if (lVar6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00e332a0(lVar4,lVar6);
      if (uVar2 != 2) {
        uVar2 = (uint)(uVar2 == 1);
      }
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    *(uint *)(param_1 + 0xb2c) = uVar2;
    lVar6 = *(long *)(*(long *)puVar1 + 0x90);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar6 + 0x7d8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    lVar6 = FUN_00e331a0(lVar4,&local_78);
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar2 = FUN_00e33320(lVar4,lVar6);
      if (uVar2 < 6) {
        uVar5 = *(undefined4 *)(&DAT_02160cd0 + (long)(int)uVar2 * 4);
      }
      else {
        uVar5 = 6;
      }
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    *(undefined4 *)(param_1 + 0xb28) = uVar5;
    *(undefined8 *)(param_1 + 0xb80) = local_78;
  }
  FUN_006c5c80(&local_70);
  return;
}


