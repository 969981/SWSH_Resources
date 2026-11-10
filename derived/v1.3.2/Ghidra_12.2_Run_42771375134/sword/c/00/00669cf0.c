/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00669cf0; name: FUN_00669cf0
 */


undefined8 FUN_00669cf0(long param_1,long *param_2)

{
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (0 < *(long *)(param_1 + 0x108)) {
    FUN_00683020(param_2,(long)*(int *)(param_1 + 0x104),0);
    (**(code **)(*param_2 + 0x160))
              (param_2,*(undefined8 *)(param_1 + 0xbe8),*(undefined8 *)(param_1 + 0x108),1);
  }
  FUN_00683020(param_2,0x10,0);
  if (0 < *(int *)(param_1 + 0x120)) {
    (**(code **)(*param_2 + 0x160))
              (param_2,*(undefined8 *)(param_1 + 0xbf8),(long)*(int *)(param_1 + 0x120) << 4,1);
  }
  if (0 < *(int *)(param_1 + 0x124)) {
    (**(code **)(*param_2 + 0x160))
              (param_2,*(undefined8 *)(param_1 + 0xc00),(long)*(int *)(param_1 + 0x124) << 4,1);
  }
  if (0 < *(int *)(param_1 + 0x128)) {
    (**(code **)(*param_2 + 0x160))
              (param_2,*(undefined8 *)(param_1 + 0xc08),(long)*(int *)(param_1 + 0x128) << 4,1);
  }
  if (0 < *(int *)(param_1 + 300)) {
    (**(code **)(*param_2 + 0x160))
              (param_2,*(undefined8 *)(param_1 + 0xc10),(long)*(int *)(param_1 + 300) << 4,1);
  }
  if (0 < *(int *)(param_1 + 0x130)) {
    (**(code **)(*param_2 + 0x160))
              (param_2,*(undefined8 *)(param_1 + 0xc18),(long)*(int *)(param_1 + 0x130) << 4,1);
  }
  if (*(int *)(param_1 + 0x134) < 1) {
    return 1;
  }
  (**(code **)(*param_2 + 0x160))
            (param_2,*(undefined8 *)(param_1 + 0xc20),(long)*(int *)(param_1 + 0x134) << 4,1);
  return 1;
}


