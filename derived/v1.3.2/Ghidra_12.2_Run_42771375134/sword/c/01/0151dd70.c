/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0151dd70; name: FUN_0151dd70
 */


bool FUN_0151dd70(long param_1)

{
  if (((((((*(uint *)(param_1 + 0x60) < 5) || (*(uint *)(param_1 + 0xbc) < 5)) ||
         (*(uint *)(param_1 + 0x118) < 5)) ||
        ((*(uint *)(param_1 + 0x174) < 5 || (*(uint *)(param_1 + 0x1d0) < 5)))) ||
       ((*(uint *)(param_1 + 0x22c) < 5 ||
        ((*(uint *)(param_1 + 0x288) < 5 || (*(uint *)(param_1 + 0x2e4) < 5)))))) ||
      (*(uint *)(param_1 + 0x340) < 5)) ||
     ((((*(uint *)(param_1 + 0x39c) < 5 || (*(uint *)(param_1 + 0x3f8) < 5)) ||
       (*(uint *)(param_1 + 0x454) < 5)) ||
      (((*(uint *)(param_1 + 0x4b0) < 5 || (*(uint *)(param_1 + 0x50c) < 5)) ||
       ((*(uint *)(param_1 + 0x568) < 5 ||
        ((*(uint *)(param_1 + 0x5c4) < 5 || (*(uint *)(param_1 + 0x620) < 5)))))))))) {
    return false;
  }
  return 4 < *(uint *)(param_1 + 0x67c);
}


