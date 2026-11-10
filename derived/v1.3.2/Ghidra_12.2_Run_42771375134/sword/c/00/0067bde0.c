/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067bde0; name: FUN_0067bde0
 */


undefined8 FUN_0067bde0(undefined8 param_1,long *param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x48) = 0x60;
  *(undefined8 *)(param_3 + 0x70) = *(undefined8 *)(param_3 + 0xa8);
  (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined4 *)(param_3 + 0x28),1);
  (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined2 *)(param_3 + 0x2c),1);
  (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined2 *)(param_3 + 0x2e),1);
  (**(code **)(*param_2 + 0x160))(param_2,param_3 + 0x30,8,1);
  (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_3 + 0x38),1);
  (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_3 + 0x3c),1);
  (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_3 + 0x40),1);
  (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_3 + 0x44),1);
  (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(param_3 + 0x48),1);
  (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(param_3 + 0x50),1);
  (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(param_3 + 0x58),1);
  (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(param_3 + 0x60),1);
  (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(param_3 + 0x68),1);
  (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(param_3 + 0x70),1);
  (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(param_3 + 0x78),1);
  (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(param_3 + 0x80),1);
  return 1;
}


