/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3d590; name: FUN_00e3d590
 */


void FUN_00e3d590(float param_1,long param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (((param_4 != -1) && (0.0 < param_1)) && (param_1 < 1.0)) {
    *(undefined8 *)(param_2 + 0x4f8) = param_3[1];
    uVar2 = param_3[3];
    uVar1 = *(undefined4 *)(param_3 + 6);
    *(undefined8 *)(param_2 + 0x518) = param_3[5];
    *(undefined8 *)(param_2 + 0x508) = uVar2;
    uVar2 = *param_3;
    *(undefined8 *)(param_2 + 0x500) = param_3[2];
    *(undefined8 *)(param_2 + 0x4f0) = uVar2;
    uVar2 = param_3[4];
    *(undefined4 *)(param_2 + 0x520) = uVar1;
    *(undefined8 *)(param_2 + 0x510) = uVar2;
    *(undefined8 *)(param_2 + 0x538) = *(undefined8 *)(param_2 + 0x3b8);
    *(undefined8 *)(param_2 + 0x530) = *(undefined8 *)(param_2 + 0x3b0);
    *(undefined8 *)(param_2 + 0x550) = *(undefined8 *)(param_2 + 0x3d0);
    *(undefined8 *)(param_2 + 0x558) = *(undefined8 *)(param_2 + 0x3d8);
    *(undefined4 *)(param_2 + 0x560) = *(undefined4 *)(param_2 + 0x3e0);
    *(int *)(param_2 + 0x568) = param_4;
    *(float *)(param_2 + 0x56c) = param_1;
    *(undefined8 *)(param_2 + 0x548) = *(undefined8 *)(param_2 + 0x3c8);
    *(undefined8 *)(param_2 + 0x540) = *(undefined8 *)(param_2 + 0x3c0);
    *(undefined4 *)(param_2 + 0x570) = 0;
    *(undefined1 *)(param_2 + 0x4ec) = 1;
  }
  return;
}


