/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e65ad0; name: FUN_00e65ad0
 */


void FUN_00e65ad0(undefined4 param_1,float param_2,long param_3,undefined8 *param_4,int param_5,
                 uint param_6,undefined4 param_7)

{
  if (((param_5 - 1U < param_6) && (0.0 <= param_2)) && (param_2 <= 1.0)) {
    *(undefined4 *)(param_3 + 0x528) = 0xffffffff;
    *(undefined8 *)(param_3 + 0x570) = 0x3f800000;
    *(undefined8 *)(param_3 + 0x580) = 0x3f8000003f800000;
    *(undefined8 *)(param_3 + 0x518) = 0;
    *(undefined8 *)(param_3 + 0x510) = 0;
    *(undefined8 *)(param_3 + 0x548) = 0;
    *(undefined8 *)(param_3 + 0x538) = 0;
    *(undefined8 *)(param_3 + 0x540) = 0;
    *(undefined8 *)(param_3 + 0x530) = 0;
    *(undefined8 *)(param_3 + 0x578) = 0;
    *(undefined1 *)(param_3 + 0x588) = 0;
    *(undefined8 *)(param_3 + 0x58c) = 0;
    *(undefined8 *)(param_3 + 0x520) = 0;
    *(undefined8 *)(param_3 + 0x518) = param_4[1];
    *(undefined8 *)(param_3 + 0x510) = *param_4;
    *(int *)(param_3 + 0x520) = param_5;
    *(uint *)(param_3 + 0x524) = param_6;
    *(undefined4 *)(param_3 + 0x528) = param_7;
    *(undefined4 *)(param_3 + 0x584) = param_1;
    *(float *)(param_3 + 0x580) = param_2;
    FUN_00e65b60();
    return;
  }
  return;
}


