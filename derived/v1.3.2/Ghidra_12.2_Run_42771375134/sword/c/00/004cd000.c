/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cd000; name: FUN_004cd000
 */


undefined8 FUN_004cd000(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  if (*(uint *)((long)param_1 + 0x24) <= (uint)param_2) {
    return 2;
  }
  iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,&local_34);
  if (iVar1 != 1) {
    return 2;
  }
  *(undefined2 *)(param_1 + 0x10) = 0;
  iVar1 = (**(code **)(*(long *)param_1[0xb] + 0x78))((long *)param_1[0xb],local_34,0,&local_30);
  if (iVar1 != 1) {
    return 2;
  }
  *(int *)(param_1 + 0xe) = local_30;
  *(int *)((long)param_1 + 0x74) = local_34 - local_30;
  (**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],&local_30);
  if (*(short *)((long)param_1 + 0x54) == 1) {
    local_2c = 0;
    uStack_28 = 0;
  }
  else {
    local_2c = (undefined4)param_1[0xf];
    uStack_28 = *(undefined4 *)((long)param_1 + 0x7c);
  }
  (**(code **)(*(long *)param_1[0xb] + 0x30))((long *)param_1[0xb],&local_30);
  *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfe;
  *(byte *)(param_1 + 4) =
       (byte)(*(uint *)(param_1[3] + 0x26b) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
  return 1;
}


