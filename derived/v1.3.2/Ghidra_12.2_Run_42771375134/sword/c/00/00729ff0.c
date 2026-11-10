/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00729ff0; name: FUN_00729ff0
 */


void FUN_00729ff0(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 8) != 0) &&
     (lVar1 = FUN_006faaa0(*(long *)(param_1 + 8),*(undefined4 *)(param_1 + 0x118)),
     -1 < *(long *)(lVar1 + 0x10))) {
    uVar3 = *(undefined8 *)
             (*(long *)(param_2 + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170 + 0xb8);
    puVar2 = (undefined8 *)FUN_006f6880();
    (**(code **)PTR_DAT_02714750)
              (uVar3,*puVar2,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
  }
  lVar1 = *(long *)(param_2 + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170;
  if (*(long *)(param_1 + 0x110) == 0) {
    FUN_0199d0f0(lVar1,0,*(undefined4 *)(param_1 + 0x11c));
    return;
  }
  FUN_0199d0f0(lVar1,*(undefined8 *)(*(long *)(param_1 + 0x110) + 0x68),
               *(undefined4 *)(param_1 + 0x11c));
  return;
}


