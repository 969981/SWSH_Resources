/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ac970; name: FUN_007ac970
 */


void FUN_007ac970(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *local_a0;
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined8 local_80;
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_54;
  
  if ((*(char *)(param_2 + 0x90) == '\0') || (*(char *)(param_2 + 0x93) != '\0')) {
    local_a0 = (undefined *)((ulong)local_a0 & 0xffffffffffffff00);
    FUN_017d0040(param_1,&local_a0);
  }
  else {
    *(undefined1 *)(param_2 + 0x93) = 1;
    *(undefined8 *)(param_2 + 0x98) = 0;
    puVar3 = (undefined8 *)FUN_017cd750(0xc0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_01847ff0(puVar3,0);
      puVar5 = puVar3;
    }
    FUN_017af110(&local_78,*(undefined8 *)(param_2 + 0xb0),puVar5,param_3,param_4,param_5,param_6,
                 param_7);
    local_54 = 0x10001;
    FUN_017d0020(&local_a0,&local_54);
    if (local_78 == (int)local_a0) {
      local_98[0] = 0;
      puVar1 = PTR_DAT_027167e8 + 0x10;
      local_88 = local_98;
      local_80 = 0x10;
      local_a0 = puVar1;
      FUN_017d05f0(&local_a0,param_4,0xffffffffffffffff);
      FUN_017b52c0(&local_a0);
      local_a0 = puVar1;
      FUN_017d0720(&local_a0);
      *(undefined8 **)(param_2 + 0x98) = puVar3;
      plVar4 = (long *)FUN_017cd750(0x28);
      if (plVar4 != (long *)0x0) {
        *plVar4 = (long)(PTR_DAT_027167f0 + 0x10);
        plVar4[1] = param_2;
        puVar1 = PTR_LAB_027167f8;
        plVar4[4] = (long)puVar5;
        plVar4[2] = (long)puVar1;
        plVar4[3] = 0;
        FUN_017dee40(puVar5,2);
        FUN_017de4d0(puVar5,plVar4,0,1);
      }
    }
    else {
      if (((*(long *)(param_2 + 0x118) != 0) && (*(int *)(*(long *)(param_2 + 0x118) + 0x54) != 0))
         && (plVar4 = *(long **)(param_2 + 0x120), plVar4 != (long *)0x0)) {
        uVar2 = FUN_017d0140(&local_78);
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar2);
        uVar2 = thunk_FUN_017ccbb0(&local_78);
        (**(code **)(*plVar4 + 8))(plVar4,&local_a0,uVar2);
      }
      *(undefined8 *)(param_2 + 0x98) = 0;
      *(undefined1 *)(param_2 + 0x93) = 0;
      (**(code **)*puVar5)(puVar5);
      FUN_017cd7a0(puVar3);
    }
    param_1[2] = local_68;
    *param_1 = CONCAT44(uStack_74,local_78);
    param_1[1] = uStack_70;
  }
  return;
}


