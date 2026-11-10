/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004000c0; name: FUN_004000c0
 */


void FUN_004000c0(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_027129d0;
  puVar1 = PTR_DAT_027129c8 + 0x10;
  param_1[0x17] = param_3;
  param_1[0x18] = param_2;
  *param_1 = (long)puVar1;
  param_1[1] = param_3;
  param_1[2] = param_2;
  param_1[3] = (long)(puVar2 + 0x10);
  param_1[0x15] = (long)(param_1 + 4);
  param_1[0x16] = 0x1000000000;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  param_1[0x1a] = param_2;
  puVar1 = PTR_DAT_027129d8;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x19] = (long)(puVar1 + 0x10);
  param_1[0x2b] = (long)(param_1 + 0x1a);
  param_1[0x2c] = 0x1000000001;
  *(undefined4 *)((long)param_1 + 0x16c) = 0xffffffff;
                    /* try { // try from 00400144 to 0040016b has its CatchHandler @ 00400314 */
  uVar3 = FUN_003ff600();
  lVar4 = FUN_00401510(param_1 + 0x2e,uVar3,"./../../foundation/include/PsMutex.h",0x71);
  param_1[0x2e] = lVar4;
  FUN_003ff550();
  param_1[0x35] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = -0xc0c00000;
                    /* try { // try from 00400188 to 00400193 has its CatchHandler @ 00400224 */
  FUN_00401170(param_1 + 0x2f,0x40);
                    /* try { // try from 00400194 to 004001bb has its CatchHandler @ 00400298 */
  uVar3 = FUN_003ff600();
  lVar4 = FUN_00401510(param_1 + 0x36,uVar3,"./../../foundation/include/PsMutex.h",0x71);
  param_1[0x36] = lVar4;
  FUN_003ff550();
  param_1[0x37] = 0;
  param_1[0x38] = 0;
                    /* try { // try from 004001c0 to 004001e7 has its CatchHandler @ 00400250 */
  uVar3 = FUN_003ff600();
  lVar4 = FUN_00401510(param_1 + 0x39,uVar3,"./../../foundation/include/PsMutex.h",0x71);
  param_1[0x39] = lVar4;
  FUN_003ff550();
                    /* try { // try from 004001e8 to 0040020f has its CatchHandler @ 0040022c */
  uVar3 = FUN_003ff600();
  lVar4 = FUN_00401510(param_1 + 0x3a,uVar3,"./../../foundation/include/PsMutex.h",0x71);
  param_1[0x3a] = lVar4;
  FUN_003ff550();
  return;
}


