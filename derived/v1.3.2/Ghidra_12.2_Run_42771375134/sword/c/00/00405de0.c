/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00405de0; name: FUN_00405de0
 */


/* WARNING: Removing unreachable block (ram,0x004061a8) */

undefined8
FUN_00405de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined8 param_5,long param_6)

{
  int iVar1;
  undefined8 *in_stack_00000010;
  undefined4 local_258 [2];
  undefined8 local_250;
  undefined8 local_238;
  undefined4 local_214;
  undefined4 local_1dc;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 auStack_188 [96];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_88 [5];
  undefined1 auStack_74 [4];
  undefined1 auStack_68 [4];
  undefined4 local_64;
  
  *in_stack_00000010 = 0;
  FUN_004bee80(param_2,0,auStack_68);
  FUN_004bebe0(local_88,param_2,param_4,auStack_74);
  iVar1 = FUN_004bf650(local_88[0],&local_64);
  if (iVar1 != 2) {
    local_100 = 0;
    uStack_f8 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_238 = 0;
    local_1c0 = 0xff00;
    local_250 = 0;
    local_1dc = 0;
    local_1c8 = 0;
    local_198 = 0;
    local_190 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0x3f80000000000000;
    local_1a8 = 0;
    uStack_1a0 = 0;
                    /* WARNING: Subroutine does not return */
    memset(auStack_188,0,0x5c);
  }
  if (*(int *)(param_6 + 0x14) != 0) {
    FUN_0048fb90(*(undefined8 *)PTR_DAT_02712ad0,*(int *)(param_6 + 0x14),*in_stack_00000010,
                 local_258);
  }
  FUN_004beff0(param_2,*in_stack_00000010,0,param_4);
  local_214 = 0;
  local_258[0] = 0;
  FUN_004a7c20(param_2,local_64,*(undefined8 *)(param_4 + 0x48),param_6,local_258);
  return 3;
}


