/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a79350; name: FUN_00a79350
 */


void FUN_00a79350(long param_1,int param_2,uint param_3)

{
  char *param3;
  long local_190;
  char *local_188;
  undefined1 *local_180;
  long local_178;
  long local_170;
  undefined1 auStack_160 [16];
  char local_150 [8];
  char *pcStack_148;
  undefined8 local_140;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if (param_2 < 0xfa) {
    if ((((1 < param_2 - 0x31U) && (1 < param_2 - 0x88U)) ||
        (*(int *)(param_1 + 0x1784) != *(int *)(param_1 + 0x16fc))) ||
       (*(int *)(param_1 + 0x1788) != param_2)) {
      *(int *)(param_1 + 0x1784) = *(int *)(param_1 + 0x16fc);
      *(int *)(param_1 + 0x1788) = param_2;
      local_150[0] = '}';
      local_150[1] = '\x0e';
      local_150[2] = '.';
      local_150[3] = -0x3d;
      local_150[4] = 'c';
      local_150[5] = 'g';
      local_150[6] = '#';
      local_150[7] = -0x4d;
      pcStack_148 = "g_table";
      local_140 = 7;
      FUN_012b4250(auStack_40,param_1 + 0x1b40,local_150);
      FUN_012b4190(auStack_50,auStack_40,(long)param_2);
      local_190 = 0x13ba27b6b7e820e8;
      local_188 = "fileName";
      local_180 = (undefined1 *)0x8;
      FUN_012b4250(auStack_160,auStack_50,&local_190);
      param3 = (char *)FUN_012b4a30(auStack_160,0);
      snprintf(local_150,0x100,"bin/battle/waza/sequence/%s.bseq",param3);
      FUN_008801a0(&local_190,local_150);
      FUN_00a79ee0(param_1,&local_190,param_3 & 1);
      if ((local_178 != 0) && (local_190 != 0)) {
        (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
      }
      local_190 = 0;
      local_188 = (char *)0xcbf29ce484222645;
      local_180 = &DAT_01d38550;
      local_178 = 0;
      if (local_170 != 0) {
        (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


