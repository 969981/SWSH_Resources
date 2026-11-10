/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b9700; name: FUN_001b9700
 */


undefined8 FUN_001b9700(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  local_24 = 0;
  local_22 = 0;
  local_30 = param_2;
  uStack_2c = param_1;
  local_28 = param_3;
  FUN_003ff570(*(undefined8 *)(param_4 + 0x11a0));
                    /* try { // try from 001b9730 to 001b973b has its CatchHandler @ 001b975c */
  uVar1 = FUN_001b9780(param_4 + 0xf68,&local_30);
                    /* try { // try from 001b9740 to 001b9743 has its CatchHandler @ 001b9758 */
  FUN_003ff5a0(*(undefined8 *)(param_4 + 0x11a0));
  return uVar1;
}


