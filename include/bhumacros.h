/**
 * @file bhumacros.h
 * 
 * This file contains helper macros
 *
 * @author Bryant Hayes
 * @date 13 June 2023
 */

#ifndef _BHU_MACROS_H_
#define _BHU_MACROS_H_

#define REQUIRE_ACTION_(condition, action)     \
    do                                         \
    {                                          \
        if (!(condition))                      \
        {                                      \
            ESP_LOGI("tinyrtc", #condition);   \
            action                             \
        }                                      \
    } while (0)

#define EXIT_IF_ERR_(status, ...)             \
    do                                        \
    {                                         \
        if (0 != (status))                    \
        {                                     \
            ESP_LOGI("tinyrtc", __VA_ARGS__); \
            goto exit;                        \
        }                                     \
    } while (0)

#endif /* _BHU_MACROS_H_ */