/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ec170; name: FUN_014ec170
 */


void FUN_014ec170(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  uVar3 = *(ulong *)(*(long *)(param_1 + 0xa0) + 0x5e0);
  if ((uVar3 & 0xff) != 0) {
    iVar1 = (int)(uVar3 >> 0x20);
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x7c) = 4;
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    else if (iVar1 == 0) {
      uVar3 = FUN_01602730();
      if (*(long *)(param_1 + 0x90) == 0) {
        local_50 = 0;
      }
      else {
        FUN_014dd710(&local_50);
      }
      plVar2 = (long *)FUN_014e73d0(local_50);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
      iVar1 = FUN_00884820(*(undefined8 *)(*plVar2 + (uVar3 >> 0x20) * 0x158 + 0x18));
      if (iVar1 == 0) {
        FUN_00ffa160(*(undefined8 *)(param_1 + 0xa0),1,1);
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xa0),0);
        local_50 = -0x263e5a17c36e21dd;
        local_48 = "Play_UI_pbox_error";
        local_40 = 0x12;
        local_38 = 0;
        FUN_016d3620(&local_50);
      }
      else {
        *(undefined1 *)(param_1 + 0x78) = 1;
        *(int *)(param_1 + 0x2d8) = (int)(uVar3 >> 0x20);
        *(undefined4 *)(param_1 + 0x7c) = 0;
        FUN_006cf0a0(&local_50,&DAT_026a7780);
        FUN_016d3620(&local_50);
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
    }
    FUN_01602c90(*(undefined8 *)(param_1 + 0xa0));
  }
  return;
}


