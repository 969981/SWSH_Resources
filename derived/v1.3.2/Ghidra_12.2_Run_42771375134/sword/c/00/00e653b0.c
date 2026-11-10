/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e653b0; name: FUN_00e653b0
 */


void FUN_00e653b0(long param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x518) = 0;
    *(undefined8 *)(param_1 + 0x510) = 0;
    *(undefined8 *)(param_1 + 0x570) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x580) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x548) = 0;
    *(undefined8 *)(param_1 + 0x540) = 0;
    *(undefined8 *)(param_1 + 0x538) = 0;
    *(undefined8 *)(param_1 + 0x530) = 0;
    *(undefined8 *)(param_1 + 0x578) = 0;
    *(undefined1 *)(param_1 + 0x588) = 0;
    *(undefined4 *)(param_1 + 0x590) = 0;
    *(undefined4 *)(param_1 + 0x58c) = 0;
    *(undefined4 *)(param_1 + 0x520) = 0;
    *(undefined4 *)(param_1 + 0x524) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x58c) = 1;
  *(int *)(param_1 + 0x520) = param_2;
  *(int *)(param_1 + 0x524) = param_2;
  return;
}


