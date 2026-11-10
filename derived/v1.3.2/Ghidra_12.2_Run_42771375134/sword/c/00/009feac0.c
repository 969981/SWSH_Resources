/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009feac0; name: FUN_009feac0
 */


undefined8 FUN_009feac0(long param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_168 [2];
  undefined1 *local_158;
  long local_150;
  long local_148;
  char acStack_138 [256];
  long local_38;
  
  lVar1 = *(long *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x78),param_1 + 0x70);
    lVar1 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  if (param_2 < 10) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    snprintf(acStack_138,0x100,"bin/battle/regulation/regulation_preset_core_%d.bin",(uint)param_2);
    FUN_008801a0(local_168,acStack_138);
    FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,1,local_168,0,
                 *(undefined8 *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x78) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(long *)(param_1 + 0x78) = local_38;
    if (local_38 != 0) {
      plVar3 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if ((*(long *)(param_1 + 0x80) != 0) || (*(long *)(param_1 + 0x100) != 0)) {
        FUN_006e1e70(local_38,param_1 + 0x70,1);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((local_150 != 0) && (local_168[0] != 0)) {
      (**(code **)(*(long *)(local_168[0] + 0x48) + 0x18))();
    }
    local_168[0] = 0;
    local_168[1] = 0xcbf29ce484222645;
    local_158 = &DAT_01d38550;
    local_150 = 0;
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


