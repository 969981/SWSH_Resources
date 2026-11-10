/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00603300; name: FUN_00603300
 */


void FUN_00603300(__jmp_buf_tag *param_1,undefined4 param_2)

{
  *(undefined4 *)((long)param_1[1].__saved_mask.__val + 0x3c) = param_2;
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,1);
}


