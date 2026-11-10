/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da5180; name: FUN_00da5180
 */


void FUN_00da5180(long param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  char acStack_58 [8];
  
  puVar4 = PTR_PTR_02710928;
  puVar3 = PTR_DAT_02710920;
  acStack_58[0] = '\0';
  acStack_58[1] = '\0';
  acStack_58[2] = '\0';
  acStack_58[3] = '\0';
  acStack_58[4] = '\0';
  acStack_58[5] = '\0';
  acStack_58[6] = '\0';
  acStack_58[7] = '\0';
  uVar7 = 0;
  lVar8 = param_1 + 0xa0 + (long)param_2 * 0x4fb0;
  if (1 < param_2) {
    lVar8 = param_1 + 0xa0;
  }
  do {
    snprintf(acStack_58,8,"%02d",uVar7 & 0xffffffff);
    local_88 = *(undefined8 *)(param_4 + 8);
    FUN_00da52f0(&local_68,&local_88,&DAT_01ce4b94,acStack_58);
    lVar6 = local_68;
    puVar1 = (undefined8 *)puVar4;
    puVar2 = (undefined8 *)puVar3;
    if (local_68 != 0) {
      puVar1 = (undefined8 *)(local_68 + 0x60);
      puVar2 = (undefined8 *)(local_68 + 0x58);
    }
    local_88 = *puVar2;
    uStack_80 = *puVar1;
    if (local_68 == 0) {
      local_78 = 0;
      local_70 = local_68;
    }
    else {
      local_78 = *(undefined8 *)(local_68 + 0x68);
      local_70 = 0;
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
      lVar5 = local_70;
      local_70 = lVar6;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
    }
    FUN_00da53a0(param_3,&local_88,lVar8);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 0xff0;
  } while (uVar7 != 5);
  return;
}


