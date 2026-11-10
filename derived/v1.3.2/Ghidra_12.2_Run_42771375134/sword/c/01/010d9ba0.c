/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d9ba0; name: FUN_010d9ba0
 */


undefined8 FUN_010d9ba0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long local_40;
  long local_38;
  ulong local_30;
  ushort local_28;
  undefined1 local_26;
  
  uVar1 = FUN_010d7f10(*(undefined8 *)(param_1 + 0x80));
  if ((uVar1 & 1) != 0) {
    FUN_00ffa290(*(undefined8 *)(param_1 + 0x88),1,1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    local_30 = 0;
    local_26 = 0;
    local_28 = 0x101;
    FUN_010ccbc0(&local_40,*(undefined8 *)(param_1 + 0x78),0x1b,0,0);
    local_38 = local_40;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    local_26 = 0;
    local_28 = local_28 & 0xff00;
    local_30 = local_30 & 0xffffffff00000000;
    FUN_01038170(*(undefined8 *)(param_1 + 0x88),&local_38);
    plVar2 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5d0) + 0x60);
    (**(code **)(*plVar2 + 8))(plVar2,1);
    FUN_010d7f30(*(undefined8 *)(param_1 + 0x80));
    FUN_010d81d0(*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x90) = 1;
  }
  return 0;
}


