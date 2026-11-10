/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801ab0; name: str
 */


/* std::stringbuf::str() const */

void std::stringbuf::str(void)

{
  long in_x0;
  ulong *in_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  if ((*(uint *)(in_x0 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(in_x0 + 0x60) >> 3 & 1) == 0) {
      in_x8[1] = 0;
      in_x8[2] = 0;
      *in_x8 = 0;
      return;
    }
    puVar4 = *(undefined1 **)(in_x0 + 0x10);
    puVar6 = *(undefined1 **)(in_x0 + 0x20);
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    uVar7 = (long)puVar6 - (long)puVar4;
    if (0xffffffffffffffef < uVar7) {
LAB_00801bfc:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar7 < 0x17) {
      puVar2 = (undefined1 *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)uVar7 << 1);
    }
    else {
      uVar3 = uVar7 + 0x10 & 0xfffffffffffffff0;
      puVar2 = operator_new(uVar3);
      in_x8[1] = uVar7;
      in_x8[2] = (ulong)puVar2;
      *in_x8 = uVar3 | 1;
    }
    if (puVar4 == puVar6) goto LAB_00801be4;
    puVar1 = puVar2;
    do {
      puVar5 = puVar4 + 1;
      *puVar1 = *puVar4;
      puVar1 = puVar1 + 1;
      puVar4 = puVar5;
    } while (puVar6 != puVar5);
  }
  else {
    puVar6 = *(undefined1 **)(in_x0 + 0x30);
    puVar4 = *(undefined1 **)(in_x0 + 0x58);
    if (*(undefined1 **)(in_x0 + 0x58) < puVar6) {
      *(undefined1 **)(in_x0 + 0x58) = puVar6;
      puVar4 = puVar6;
    }
    puVar6 = *(undefined1 **)(in_x0 + 0x28);
    in_x8[1] = 0;
    in_x8[2] = 0;
    *in_x8 = 0;
    uVar7 = (long)puVar4 - (long)puVar6;
    if (0xffffffffffffffef < uVar7) goto LAB_00801bfc;
    if (uVar7 < 0x17) {
      puVar2 = (undefined1 *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)uVar7 << 1);
    }
    else {
      uVar3 = uVar7 + 0x10 & 0xfffffffffffffff0;
      puVar2 = operator_new(uVar3);
      in_x8[1] = uVar7;
      in_x8[2] = (ulong)puVar2;
      *in_x8 = uVar3 | 1;
    }
    if (puVar6 == puVar4) goto LAB_00801be4;
    puVar1 = puVar2;
    do {
      puVar5 = puVar6 + 1;
      *puVar1 = *puVar6;
      puVar1 = puVar1 + 1;
      puVar6 = puVar5;
    } while (puVar4 != puVar5);
  }
  puVar2 = puVar2 + uVar7;
LAB_00801be4:
  *puVar2 = 0;
  return;
}


