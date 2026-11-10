/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007cb8e0; name: FUN_007cb8e0
 */


void FUN_007cb8e0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_208 [364];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  uVar1 = *(undefined8 *)PTR_DAT_02716a30;
  FUN_0193fc60(uVar1);
  FUN_01940840(uVar1);
  local_80 = *(undefined8 *)(param_1 + 8);
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_70 = 0;
  uStack_78 = 0;
  local_9c = 0;
                    /* WARNING: Subroutine does not return */
  memset(auStack_208,0,0x168);
}


