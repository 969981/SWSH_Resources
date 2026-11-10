/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d95970; name: FUN_00d95970
 */


void FUN_00d95970(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long local_28;
  
  if ((*(char *)(param_1 + 0x653) != '\0') && (*(int *)(param_1 + 0x5d4) == 2)) {
    iVar1 = *(int *)(param_1 + 0x658);
    if ((-1 < iVar1) && (*(int *)(param_1 + 0x658) = iVar1 + 1, 1 < iVar1)) {
      nn::oe::SetCpuBoostMode(1);
      *(undefined1 *)(param_1 + 0x690) = 0;
      *(undefined8 *)(param_1 + 0x688) = 0;
      *(undefined8 *)(param_1 + 0x680) = 0;
      *(undefined8 *)(param_1 + 0x678) = 0;
      *(undefined8 *)(param_1 + 0x670) = 0;
      *(undefined8 *)(param_1 + 0x668) = 0;
      puVar2 = PTR_DAT_02710848;
      *(undefined1 *)(param_1 + 0x654) = 1;
      lVar3 = *(long *)(*(long *)puVar2 + 0x88);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      FUN_010672e0(&local_28,lVar3,0);
      FUN_00700830(local_28,0,4);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      *(undefined4 *)(param_1 + 0x658) = 0xffffffff;
    }
  }
  return;
}


