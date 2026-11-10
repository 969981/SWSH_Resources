/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f33e0; name: FUN_005f33e0
 */


void FUN_005f33e0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    plVar1 = *(long **)(param_1 + 0x10);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*(long *)(param_1 + 0x88),
                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/SiGfx_Image.cpp",0x47b);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = 2;
  plVar1 = (long *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  if (((*(byte *)(param_1 + 0xd8) & 1) == 0) && (lVar2 = *plVar1, lVar2 != 0)) {
    plVar3 = *(long **)(param_1 + 0x98);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,lVar2);
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  plVar3 = (long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  if (((*(byte *)(param_1 + 0x128) & 1) == 0) && (lVar2 = *plVar3, lVar2 != 0)) {
    plVar1 = *(long **)(param_1 + 0xe8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1,lVar2);
      (**(code **)(*plVar1 + 0x48))(plVar1,lVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  plVar1 = (long *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x128) = 0;
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (((*(byte *)(param_1 + 0x178) & 1) == 0) && (lVar2 = *plVar1, lVar2 != 0)) {
    plVar3 = *(long **)(param_1 + 0x138);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,lVar2);
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  return;
}


