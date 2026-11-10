/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff0e0; name: FUN_003ff0e0
 */


void FUN_003ff0e0(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  FUN_003c6e00(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10),1,0xb);
  puVar1 = PTR_DAT_027129c0;
  param_1[5] = param_2;
  param_1[6] = param_3;
  *(undefined1 *)((long)param_1 + 0x4e) = 0;
  *(undefined2 *)((long)param_1 + 0x4c) = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(byte *)((long)param_1 + 0x25) = *(byte *)((long)param_1 + 0x25) | 0x40;
                    /* try { // try from 003ff148 to 003ff183 has its CatchHandler @ 003ff198 */
  FUN_003ba4b0(param_1[1],param_1);
  FUN_003ba4b0(param_1[2],param_1);
  FUN_003dd8f0(*(undefined8 *)(param_1[1] + 0x48),param_1,1);
  FUN_003cd660(*(undefined8 *)(*(long *)(param_1[1] + 0x48) + 0x1048),param_1);
  *(undefined2 *)(param_1 + 9) = 0;
  return;
}


