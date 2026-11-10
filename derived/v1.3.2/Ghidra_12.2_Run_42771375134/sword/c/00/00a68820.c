/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a68820; name: FUN_00a68820
 */


void FUN_00a68820(long param_1)

{
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x580));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x588));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x590));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x598));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x5a0));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x5a8));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x5b0));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x548));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x550));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x558));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x560));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x568));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x570));
  FUN_00ad21c0(*(undefined8 *)(param_1 + 0x578));
  if (*(long *)(param_1 + 0x920) != 0) {
    FUN_00aaa740();
  }
  if (*(char *)(param_1 + 0xb98) != '\0') {
    FUN_00a68950(param_1);
  }
  if (*(long *)(param_1 + 0xbd0) != 0) {
    FUN_00aad6e0();
  }
  if (*(long *)(param_1 + 0xbd8) != 0) {
    FUN_00aad6e0();
  }
  *(undefined8 *)(param_1 + 0xbe0) = 0xcbf29ce484222645;
  if (*(int *)(param_1 + 0xbf0) != 0x10) {
    FUN_00aa57a0(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0xbf0) = 0x10;
  }
  *(undefined8 *)(param_1 + 0xbe8) = 0xcbf29ce484222645;
  if (*(int *)(param_1 + 0xbf4) != 0x10) {
    FUN_00aa57a0(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0xbf4) = 0x10;
  }
  FUN_00adb170(*(undefined8 *)(param_1 + 0x800));
  FUN_00adb170(*(undefined8 *)(param_1 + 0x808));
  return;
}


